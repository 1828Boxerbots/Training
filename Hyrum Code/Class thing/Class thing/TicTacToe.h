#pragma once
#include "Game.h"
class TicTacToe :public Game
{
	public: 
		TicTacToe();
	char m_allPositions[9] = { '1','2','3','4','5','6','7','8','9' };
	bool m_currentPlayerIsX = true;
	bool m_isTie = false;
	bool m_isQuit = false;
	void DisplayBoard();
	void PlayGame() override;
	bool HasWon();
	bool IsInputValid(char input);
	char GetInput();
	void ProcessInput(char input);
	char IsQuit(char input);
};