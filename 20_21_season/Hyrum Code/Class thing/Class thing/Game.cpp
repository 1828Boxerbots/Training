#include "Game.h"
#include <iostream>
Game::Game() 
{
	
}
void Game::DisplayBoard()
{
	
}
char Game::GetInput()
{
    return '0';
}
bool Game::IsInputValid(char input)
{
    return '0';
}
bool Game::HasWon()
{
    return '0';
}
bool Game::IsQuit(char input)
{
    return '0';
}
void Game::ProcessInput(char input)
{

}
void Game::PlayGame()
{
    bool yesQuit = false;
    while (yesQuit == false)
    {
        DisplayBoard();
        char input = GetInput();
        if (IsInputValid(input) == true)
        {
            if (IsQuit(input) == false)
            {
                ProcessInput(input);
            }
            else
            {
                yesQuit = true;
                std::cout << "Aww. You Quit. :(\n";
            }
        }
    }
}