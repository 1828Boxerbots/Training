#include <iostream>
#include <string>
char allPositions[9] = { '1','2','3','4','5','6','7','8','9' };
void DrawBoard() 
{
    std::cout << allPositions[0] << "|" << allPositions[1]<< "|" <<allPositions[2];
    std::cout << "\n-+-+-\n";
    std::cout << allPositions[3] << "|" << allPositions[4] << "|" << allPositions[5];
    std::cout << "\n-+-+-\n";
    std::cout << allPositions[6] << "|" << allPositions[7] << "|" << allPositions[8] << "\n";
}
void PlayerOneTurn()
{
    bool isInput = false;
    std::string str = "0";
    char PlayerInput = '0';
    while (isInput==false) 
    {
        getline(std::cin, str);
        if (str.length() == 1)
        {
            PlayerInput = str[0];
        }
        else
        {
            PlayerInput = '0';
        }
        for (int i = 0; i < 9; i++)
        {
            if (PlayerInput == allPositions[i]&&PlayerInput!='O')
            {
                allPositions[i] = 'X';
                isInput = true;
            }
        }
        if (isInput == false)
        {
            std::cout << "Invalid input. Try again.\n";
        }
        //std::cout << PlayerInput<<"\n";
    }

}
void PlayerTwoTurn()
{
    bool isInput = false;
    std::string str = "0";
    char PlayerInput = '0';
    while (isInput == false)
    {
        getline(std::cin, str);
        if (str.length() == 1)
        {
            PlayerInput = str[0];
        }
        else
        {
            PlayerInput = '0';
        }
        for (int i = 0; i < 9; i++)
        {
            if (PlayerInput == allPositions[i] && PlayerInput != 'X')
            {
                allPositions[i] = 'O';
                isInput = true;
            }
        }
        if (isInput == false)
        {
            std::cout << "Invalid input. Try again.\n";
        }
        //std::cout << PlayerInput<<"\n";
    }
}
bool GameWon(int pos1, int pos2, int pos3, char player)
{
    if (allPositions[pos1] == player && allPositions[pos2] == player && allPositions[pos3] == player)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool GameWonHalf(char player)
{
    char players = player;
    
    if (GameWon(0, 1, 2, players) == true
        || GameWon(3, 4, 5, players) == true
        || GameWon(6, 7, 8, players) == true
        || GameWon(0, 3, 6, players) == true
        || GameWon(1, 4, 7, players) == true
        || GameWon(2, 5, 8, players) == true
        || GameWon(0, 4, 8, players) == true
        || GameWon(2, 4, 6, players) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool IsTie()
{
    if (allPositions[0] != '1'
        && allPositions[1] != '2'
        && allPositions[2] != '3'
        && allPositions[3] != '4'
        && allPositions[4] != '5'
        && allPositions[5] != '6'
        && allPositions[6] != '7'
        && allPositions[7] != '8'
        && allPositions[8] != '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool PlayGame() 
{
    DrawBoard();
    std::cout << "Player 1, it's your turn.\nEnter the number corresponding to your wanted position.\n";
    PlayerOneTurn();
    DrawBoard();
    if (GameWonHalf('X') == true)
    {
        DrawBoard();
        std::cout << "Player 1 Won!!";
        return true;
    }
    else if(IsTie()==true)
    {
        DrawBoard();
        std::cout << "A tie. Really? You guys are boring.";
        return true;
    }
    std::cout << "Player 2, it's your turn.\nEnter the number corresponding to your wanted position.\n";
    PlayerTwoTurn();
    if (GameWonHalf('O') == true)
    {
        DrawBoard();
        std::cout << "Player 2 Won!!";
        return true;
    }
    else if (IsTie() == true)
    {
        DrawBoard();
        std::cout << "A tie. Really? You guys are boring.";
        return true;
    }
    return false;
}
int main()
{
    std::cout << "Hello Users!\n";
    std::cout << "Welcome to Tic-Tac-Toe!\n";
    std::cout << "To play, enter the position with the corresponding number you want and hit enter.\n";
    std::cout << "Most importantly, have fun!\n";
   do
    {

    } while (PlayGame() == false);
}
