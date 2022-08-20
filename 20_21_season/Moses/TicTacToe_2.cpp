#include <iostream>
#include <string>
using namespace std;


//Draw the game board
void DrawBoard(string board[])
{
  cout << "\n";
  
  cout << "  A B C\n";
  cout << "1 ";
  cout << board[0];
  cout << "|";
  cout << board[1];
  cout << "|";
  cout << board[2] << "\n";
  cout << "  -+-+-\n";
  
  cout << "2 ";
  cout << board[3];
  cout << "|";
  cout << board[4];
  cout << "|";
  cout << board[5] << "\n";
  cout << "  -+-+-\n";
  
  cout << "3 ";
  cout << board[6];
  cout << "|";
  cout << board[7];
  cout << "|";
  cout << board[8] << "\n";
}

//Change turn to next turn
string Turn(int turn)
{
  if (turn == 1)
  {
    return "X";
  }
  else if (turn == 2)
  {
    return "O";
  }
  else
  {
    return " ";
  }
}

int ChangeTurn(int turn)
{
  switch (turn)
  {
    case 1:
      return 2;
      
    case 2:
      return 1;
  }
}

//check if X won, and if it did, end the game with X as the winner
bool WinX(string board[])
{
  //  A B C
  //1 1|2|3
  //  -+-+-
  //2 4|5|6
  //  -+-+-
  //3 7|8|9
  
  if ((board[0] == "X")&&(board[3] == "X")&&(board[6] == "X"))
  
    return true;
  
  else if ((board[1] == "X")&&(board[4] == "X")&&(board[7] == "X"))
  
    return true;
  
  else if ((board[2] == "X")&&(board[5] == "X")&&(board[8] == "X"))
  
    return true;
  
  else if ((board[0] == "X")&&(board[1] == "X")&&(board[2] == "X"))
  
    return true;
  
  else if ((board[3] == "X")&&(board[4] == "X")&&(board[5] == "X"))
  
    return true;
  
  else if ((board[6] == "X")&&(board[7] == "X")&&(board[8] == "X"))
  
    return true;
  
  else if ((board[0] == "X")&&(board[4] == "X")&&(board[8] == "X"))
  
    return true;
  
  else if ((board[2] == "X")&&(board[4] == "X")&&(board[6] == "X"))
  
    return true;
    
  else
  
    return false;
  
}

//check if O won, and if it did, end the game with O as the winner
bool WinO(string board[])
{
  //  A B C
  //1 1|2|3
  //  -+-+-
  //2 4|5|6
  //  -+-+-
  //3 7|8|9
  
  if ((board[0] == "O")&&(board[3] == "O")&&(board[6] == "O"))
  
    return true;
  
  else if ((board[1] == "O")&&(board[4] == "O")&&(board[7] == "O"))
  
    return true;
  
  else if ((board[2] == "O")&&(board[5] == "O")&&(board[8] == "O"))
  
    return true;
  
  else if ((board[0] == "O")&&(board[1] == "O")&&(board[2] == "O"))
  
    return true;
  
  else if ((board[3] == "O")&&(board[4] == "O")&&(board[5] == "O"))
  
    return true;
  
  else if ((board[6] == "O")&&(board[7] == "O")&&(board[8] == "O"))
  
    return true;
  
  else if ((board[0] == "O")&&(board[4] == "O")&&(board[8] == "O"))
  
    return true;
  
  else if ((board[2] == "O")&&(board[4] == "O")&&(board[6] == "O"))
  
    return true;
    
  else
  
    return false;
  
}

//checks if the board is full, and if it is, end game as tie
bool Tie(string board[])
{
  if ((board[0] == " ")||(board[1] == " ")||(board[2] == " ")||(board[3] == " ")||(board[4] == " ")||(board[5] == " ")||(board[6] == " ")||(board[7] == " ")||(board[8] == " "))
  {
    return false;
  }
  else
  {
    return true;
  }
}


//check if the input is a valid one
bool CheckIfValid(string input)
{
  bool isValid = ((input == "A1")||(input == "A2")||(input == "A3")||(input == "B1")||(input == "B2")||(input == "B3")||(input == "C1")||(input == "C2")||(input == "C3"));
  return isValid;
}


//ask for the player input
string GetInput(int turn)
{
  string input;
  
  cout << "+----------------------------------------------------------------------------+\n";
  cout << "Please select a space on the board to play by entering the letter and number\ncorresponding to that space. (i.e. A1, A2, etc.)\n";
  cout << "\n";
  if (turn == 1)
  {
    cout << "It's X's turn.\n";
  }
  else if (turn == 2)
  {
    cout << "It's O's turn.\n";
  }
    
    cout << "+----------------------------------------------------------------------------+\n";
    
  do
  {
    getline (cin, input);
    
  }while (CheckIfValid(input) == false);
    
   
  return input;
}

int main()
{
  //initiate variables
  bool gameX = false;
  bool gameO = false;
  bool tie = false;
  int turn = 1;
  string input;
  int inputValue;
  
  //initiate board
  string board [9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
  
  do
  {
    //draw board
    DrawBoard(board);
    
    //get plaer input
    input = GetInput(turn);
    
  
    //change the correct spot to the correct character
    if ((input == "A1")&&(board[0] == " "))
      {

        board[0] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
  
      else if ((input == "B1")&&(board[1] == " "))
      {

        board[1] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "C1")&&(board[2] == " "))
      {

        board[2] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "A2")&&(board[3] == " "))
      {

        board[3] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "B2")&&(board[4] == " "))
      {

        board[4] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "C2")&&(board[5] == " "))
      {

        board[5] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "A3")&&(board[6] == " "))
      {

        board[6] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "B3")&&(board[7] == " "))
      {

        board[7] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
      else if ((input == "C3")&&(board[8] == " "))
      {

        board[8] = Turn(turn);
        turn = ChangeTurn(turn);
        
      }
    
  
  //check if anyone won or if its a tie
  gameX = WinX(board);
  gameO = WinO(board);
  tie = Tie(board);
    
  } while ((gameX == false)&&(gameO == false)&&(tie == false));
  
  //draw the winning board
  DrawBoard(board);
  
  //say who win
  if ((gameX == true)&&(gameO == false))
  {
    cout << "\n";
    cout << "+--------------+\n";
    cout << "\n";
    cout << "X Wins!\n";
    cout << "\n";
    cout << "+--------------+\n";
  }
  else if ((gameO == true)&&(gameX == false))
  {
    cout << "\n";
    cout << "+--------------+\n";
    cout << "\n";
    cout << "O Wins!\n";
    cout << "\n";
    cout << "+--------------+\n";
  }
  
}