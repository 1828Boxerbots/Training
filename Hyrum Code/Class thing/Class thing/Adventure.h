#pragma once
#include "Game.h"
class Adventure :public Game
{
    public:
	    Adventure();
    void DisplayBoard(int x, int y);
    char GetInput();
    bool IsUp(char input);
    bool IsDown(char input);
    bool IsLeft(char input);
    bool IsRight(char input);
    bool IsQuit(char input);
    bool IsInputValid(int x, int y, char input);
    int MoveX(int x, char input);
    int MoveY(int y, char input);
    bool HasWon(int x, int y);
    void ProcessInput(char input);
    void PlayGame() override;
};