#include <iostream>
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()
{

	for (int i = 0; i < 9; i++)
	{
		m_board[i] = ' ';
	}
}

char TicTacToe::GetValidInput()
{
	
	char input;
	cout << "+---------------------+\n";
	cout << "Please select a space on the board to play by entering the letter and number\ncorresponding to that space. (i.e. A1, A2, etc.)\n";
	cout << "+---------------------+\n";
	cin >> input;
	return input;
}

void TicTacToe::PlayGame()
{
	DrawBoard();
	char input = GetValidInput();


}

void TicTacToe::DrawBoard()
{
	cout << "\n";

	cout << "  A B C\n";
	cout << "1 ";
	cout << m_board[0];
	cout << "|";
	cout << m_board[1];
	cout << "|";
	cout << m_board[2] << "\n";
	cout << "  -+-+-\n";

	cout << "2 ";
	cout << m_board[3];
	cout << "|";
	cout << m_board[4];
	cout << "|";
	cout << m_board[5] << "\n";
	cout << "  -+-+-\n";

	cout << "3 ";
	cout << m_board[6];
	cout << "|";
	cout << m_board[7];
	cout << "|";
	cout << m_board[8] << "\n";
}
