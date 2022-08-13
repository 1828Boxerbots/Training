
#include <iostream>
#include "TicTacToe.h"
#include "Adventure.h"
int main()
{
	Game* pGame = nullptr;
	std::cout << "Choose Game 1 or Game 2";
	int selection;
	std::cin >> selection;
	if (selection == 1)
	{
		pGame = new TicTacToe();
	}
	else
	{
		pGame = new Adventure();
	}
	pGame->PlayGame();

}