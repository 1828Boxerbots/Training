#include "TicTacToe.h"
#include <iostream>
#include <string>
TicTacToe::TicTacToe()
{
	
}
void TicTacToe::DisplayBoard()
{
	std::cout << m_allPositions[0] << "|" << m_allPositions[1] << "|" << m_allPositions[2];
	std::cout << "\n-+-+-\n";
	std::cout << m_allPositions[3] << "|" << m_allPositions[4] << "|" << m_allPositions[5];
	std::cout << "\n-+-+-\n";
	std::cout << m_allPositions[6] << "|" << m_allPositions[7] << "|" << m_allPositions[8] << "\n";
}
char TicTacToe::GetInput()
{
	bool isInputValid = false;
	char input;
	std::string str = "0";
	do 
	{
		std::cout << "Input input.";
		getline(std::cin, str);
		if (str.length() == 1)
		{
			input = str[0];
		}
		else
		{
			input = '0';
		}
		switch (input)
		{
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				for (int i = 0; i < 9; i++)
				{
					if (input == m_allPositions[i])
					{
						isInputValid = true;
						return input;
					}
				}
				break;
			case 'q':
			case 'Q':
				isInputValid = true;
				return input;

			default:
				std::cout << "Stupid. Thats an invalid input. Try again.";
				break;
		}
	} while (isInputValid==false);
}
bool TicTacToe::IsInputValid(char input)
{
	switch(input)
	{
		case 'q':
		case 'Q':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			return true;
		default:
			return false;
	}
}
char TicTacToe::IsQuit(char input)
{
	return '0';
}
void TicTacToe::ProcessInput(char input)
{
	bool isInput = false;
	char PlayerInput = '0';
	while (isInput == false)
	{
		for (int i = 0; i < 9; i++)
		{
			if (input == m_allPositions[i])
			{
				if (m_currentPlayerIsX == true)
				{
					m_allPositions[i] = 'X';
					isInput = true;
					m_currentPlayerIsX = false;
				}
				else 
				{
					m_allPositions[i] = 'O';
					isInput = true;
					m_currentPlayerIsX = true;
				}
			}
		}
		if (input == 'q' || input == 'Q')
		{
			isInput = true;
			m_isQuit = true;
		}
		if (isInput == false)
		{
			std::cout << "Invalid input. Try again.\n";
		}
		//std::cout << PlayerInput<<"\n";
	}
}
bool TicTacToe::HasWon()
{
	char player = '0';
	if (m_isQuit == true)
	{
		return true;
	}
	if (m_currentPlayerIsX==false)
	{
		player = 'X';
	}
	else
	{
		player = 'O';
	}
	if ((m_allPositions[0] == player && m_allPositions[1] == player && m_allPositions[2] == player)||
		(m_allPositions[3] == player && m_allPositions[4] == player && m_allPositions[5] == player)||
		(m_allPositions[6] == player && m_allPositions[7] == player && m_allPositions[8] == player)||
		(m_allPositions[0] == player && m_allPositions[3] == player && m_allPositions[6] == player) ||
		(m_allPositions[1] == player && m_allPositions[4] == player && m_allPositions[7] == player) ||
		(m_allPositions[2] == player && m_allPositions[5] == player && m_allPositions[8] == player) ||
		(m_allPositions[0] == player && m_allPositions[4] == player && m_allPositions[8] == player) ||
		(m_allPositions[6] == player && m_allPositions[4] == player && m_allPositions[2] == player))
	{
		return true;
	}
	else if(m_allPositions[0] != '1' && m_allPositions[1] != '2' && m_allPositions[2] != '3' &&
		m_allPositions[3] != '4' && m_allPositions[4] != '5' && m_allPositions[5] != '6' &&
		m_allPositions[6] != '7' && m_allPositions[7] != '8' && m_allPositions[8] != '9')
	{
		m_isTie = true;
		return true;
	}
	return false;
}
void TicTacToe::PlayGame()
{
	do
	{
		DisplayBoard();
		char input = GetInput();
		if (IsInputValid(input) == true)
		{
			ProcessInput(input);
		}
		else
		{
			std::cout << "Input Invalid\n";
		}
	} while (HasWon() == false);
	if (m_isQuit == false) 
	{
		DisplayBoard();
		m_allPositions[0] = '1';
		m_allPositions[1] = '2';
		m_allPositions[2] = '3';
		m_allPositions[3] = '4';
		m_allPositions[4] = '5';
		m_allPositions[5] = '6';
		m_allPositions[6] = '7';
		m_allPositions[7] = '8';
		m_allPositions[8] = '9';
		if (m_isTie == true)
		{
			m_currentPlayerIsX = true;
			m_isTie = false;
			m_isQuit = false;
			std::cout << "Wow. A tie. I'm so impressed. This is not sarcasm.\n";

		}
		else if (m_currentPlayerIsX == false)
		{
			m_currentPlayerIsX = true;
			m_isTie = false;
			m_isQuit = false;
			std::cout << "X be is de done winner. Get recked noob.\n";
		}
		else
		{
			m_currentPlayerIsX = true;
			m_isTie = false;
			m_isQuit = false;
			std::cout << "X... \nYou stupid idiot. \nYou went first and you still got recked. \nI have no words.\n";
		}
	}
	else
	{
		m_allPositions[0] = '1';
		m_allPositions[1] = '2';
		m_allPositions[2] = '3';
		m_allPositions[3] = '4';
		m_allPositions[4] = '5';
		m_allPositions[5] = '6';
		m_allPositions[6] = '7';
		m_allPositions[7] = '8';
		m_allPositions[8] = '9';
		m_currentPlayerIsX = true;
		m_isTie = false;
		m_isQuit = false;
		std::cout << "Really? You can't finish a single game of Tic-Tac-Toe?\n";
	}
}

