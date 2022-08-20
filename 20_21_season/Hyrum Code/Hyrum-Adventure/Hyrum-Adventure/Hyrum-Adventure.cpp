// Hyrum-Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void Display(int x, int y) 
{
    //std::cout << "x = " << x << std::endl;
    //std::cout << " y = " << y << std::endl;
    
    if (x <= 0 || x >= 4 || y < 0 || y>4)
    {
        std::cout << "+-- +\n|   |\n|   |\n|   |\n+ --+\n";
    }
    else
    {
        if (y == 0 && x == 3) 
        {
            std::cout << "+--*+\n";
        }
        else 
        {
            std::cout << "+-- +\n";
        }
        for (int yy = 1; yy < 4; yy++)
        {
            std::cout << "|";
            if (y == yy)
            {
                for (int xx = 1; xx < 4; xx++)
                {
                    if (x == xx)
                    {
                        std::cout << "*";
                    }
                    else
                    {
                        std::cout << " ";
                    }
                }
                std::cout << "|\n";
            }
            else 
            {
                std::cout << "   |\n";
            }
        }
        if (y == 4 && x == 1)
        {
            std::cout << "+*--+\n";
        }
        else
        {
            std::cout << "+ --+\n";
        }
    }
    std::cout << "\n";
}
char GetValidInput2() 
{
    char input = 'b';
    bool inputValid = false;
    while (inputValid == false)
    {
        std::cout << "Input valid directional input. (w-up, a-left, s-down, d-right)\n";
        std::cin >> input;
        switch (input)
        {
            case 'A':
            case 'S':
            case 'D':
            case 'W':
            case 'Q':
            case 'a':
            case 's':
            case 'd':
            case 'w':
            case 'q':
                inputValid = true;
                break;
            default:
                std::cout << "Hey Stupid, try Again.\n" << std::endl;
        }
    }
    return input;
}
bool IsUp(char input) 
{
    return input == 'w' || input == 'W';
}
bool IsDown(char input)
{
    return input == 's' || input == 'S';
}
bool IsLeft(char input)
{
    return input == 'a' || input == 'A';
}
bool IsRight(char input)
{
    return input == 'd' || input == 'D';
}
bool IsQuit(char input)
{
    return input == 'q' || input == 'Q';
}
bool IsInputValid(int x, int y, char input) 
{
    if (IsQuit(input) == true)
    {
        return true;
    }
    if (y == 0 && IsDown(input) == false)
    {
        return false;
    }
    if (x == 1 && IsLeft(input) == true)
    {
        return false;
    }
    if (x == 3 && IsRight(input) == true)
    {
        return false;
    }
    if (y == 1 && x != 3 && IsUp(input) == true)
    {
        return false;
    }
    if (y == 3 && x != 1 && IsDown(input) == true)
    {
        return false;
    }
    if (y == 4 && IsRight(input) == true)
    {
        return false;
    }
    return true;
}
int MoveX(int x, char input)
{
    if (IsRight(input))
    {
        return x + 1;
    }
    if (IsLeft(input))
    {
        return x - 1;
    }
    return x;
}
int MoveY(int y, char input)
{
    if (IsDown(input))
    {
        return y + 1;
    }
    if (IsUp(input))
    {
        return y - 1;
    }
    return y;
}
bool IsGameOver(int x, int y)
{
    return y > 4;
}
int main()
{
    int x = 3;
    int y = 0;
    bool yesQuit = false;
    while (yesQuit == false)
    {
        Display(x, y);
        char input = GetValidInput2();
        if (IsInputValid(x, y, input) == true)
        {
            if (IsQuit(input) == false)
            {
                x = MoveX(x, input);
                y = MoveY(y, input);
                if (IsGameOver(x, y) == true)
                {
                    yesQuit = true;
                    std::cout << "Congratulations!";
                }
            }
            else
            {
                yesQuit = true;
                std::cout << "Aww. You Quit. :(";
            }
        }
    }
   
    return 0;
}