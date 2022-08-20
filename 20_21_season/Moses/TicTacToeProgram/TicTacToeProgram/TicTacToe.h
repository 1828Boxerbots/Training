#pragma once
#include <string.h>

class TicTacToe
{
public:
	TicTacToe();
	char m_board[9];
	void PlayGame();
	void DrawBoard();
	char GetValidInput();
	bool CheckValidInput();
	bool ProcessInput();
	bool IsGameOver();
};