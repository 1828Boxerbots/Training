#pragma once
class Game 
{
	public:
		Game();
	void DisplayBoard();
	virtual void PlayGame();
	bool HasWon();
	bool IsInputValid(char input);
	char GetInput();
	bool IsQuit(char input);
	void ProcessInput(char input);
};