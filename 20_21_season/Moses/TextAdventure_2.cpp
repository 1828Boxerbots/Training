#include <iostream>
#include <string>

//checks which screen needs to be displayed
int GoToScreen(int screen, int choice)
{
  
  switch (screen)
  {
    
    //1
    case 1:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 2\n";
          return 2;
          break;
          
        case 2:
          std::cout << "screen 3\n";
          return 3;
          break;
          
        case 3:
          std::cout << "screen 4\n";
          return 4;
          break;
          
        case 4:
          std::cout << "screen 5\n";
          return 5;
          break;
      }
    
    
    //2
    case 2:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 3\n";
          return 3;
          break;
          
        case 2:
          std::cout << "screen 1\n";
          return 1;
          break;
      }
    
    
    //3
    case 3:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 6\n";
          return 6;
          break;
          
        case 2:
          std::cout << "screen 7\n";
          return 7;
          break;
      }
    
    
    //4
    case 4:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 6\n";
          return 6;
          break;
          
        case 2:
          std::cout << "screen 7\n";
          return 7;
          break;
      }
    
    
    //5
    case 5:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 8\n";
          return 8;
          break;
          
        case 2:
          std::cout << "screen 7\n";
          return 7;
          break;
      }
    
    
    //6
    case 6:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 13\n";
          return 13;
          break;
          
        case 2:
          std::cout << "screen 7\n";
          return 7;
          break;
      }
    
    
    //7
    case 7:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 9\n";
          return 9;
          break;
          
        case 2:
          std::cout << "screen 16\n";
          return 16;
          break;
      }
    
    
    //8
    case 8:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 15\n";
          return 15;
          break;
          
        case 2:
          std::cout << "screen 11\n";
          return 11;
          break;
      }
    
    
    //9
    case 9:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 14\n";
          return 14;
          break;
          
        case 2:
          std::cout << "screen 10\n";
          return 10;
          break;
      }
    
    
    //10
    case 10:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 18\n";
          return 18;
          break;
          
        case 2:
          std::cout << "screen 17\n";
          return 17;
          break;
      }
    
    
    //11
    case 11:
    
      switch (choice)
      {
        
        case 1:
          std::cout << "screen 19\n";
          return 19;
          break;
          
        case 2:
          std::cout << "screen 12\n";
          return 12;
          break;
      }
  }
    return screen;
}

//4 valid inputs
bool ValidInputCheck1(int input)
{
    if ((input == 1)||(input == 2)||(input == 3)||(input == 4))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//2 valid inputs
bool ValidInputCheck2(int input)
{
    if ((input == 1)||(input == 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//get input with 4 inputs
int GetInput1()
{
    int command;
    do
    {
        std::cout << "Select your choice by entering the number by it.\n";
        std::cin >> command;
    } while (ValidInputCheck1(command) == false);
    return command;
}

//get input with 2 inputs
int GetInput2()
{
    int command;
    do
    {
        std::cout << "Select your choice by entering the number by it.\n";
        std::cin >> command;
    } while (ValidInputCheck2(command) == false);
    return command;
}

//screen 1
int Start()
{
    int command;
    std::cout << "\n";
    std::cout << "You are walking down a path when it splits into four seperate ones\n";
    std::cout << "going in different directions.\n";
    std::cout << "\n";
    std::cout << "Choose which path to go down.\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - left\n";
    std::cout << "2 - middle left\n";
    std::cout << "3 - middle right\n";
    std::cout << "4 - right\n";
    std::cout << "+------------------------------+\n";
    command = GetInput1();
    return command;
}

//screen 2
int PathEnd()
{
    int command;
    std::cout << "\n";
    std::cout << "You take the path on the left.\n";
    std::cout << "The path comes to a stop\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - continue off the path\n";
    std::cout << "2 - go back\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 3
int NoPathRustle()
{
    int command;
    std::cout << "\n";
    std::cout << "There is no path so you walk through the woods\n";
    std::cout << "you hear a big rustle coming from a bush\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - stay and find out what it is\n";
    std::cout << "2 - continue walking\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 4
int TripOnLog()
{
    int command;
    std::cout << "\n";
    std::cout << "You trip on a log sticking out\n";
    std::cout << "onto the path and hurt your ankle\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - call for help\n";
    std::cout << "2 - keep walking\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 5
int FindPond()
{
    int command;
    std::cout << "\n";
    std::cout << "You find a pond\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - take a break\n";
    std::cout << "2 - keep walking\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 6
int FindBear()
{
    int command;
    std::cout << "\n";
    std::cout << "A bush rustles and out jumps a bear!\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - fight the bear\n";
    std::cout << "2 - run\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 7
int FindHouse()
{
    int command;
    std::cout << "\n";
    std::cout << "You keep walking and find a house.\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - walk up to it\n";
    std::cout << "2 - ignore it and keep going\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 8
int FindTree()
{
    int command;
    std::cout << "\n";
    std::cout << "You find a tree that offers good shade\n";
    std::cout << "and looks like it would be fun to climb\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - climb tree\n";
    std::cout << "2 - sit under tree in the shade\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 9
int EnterHouse()
{
    int command;
    std::cout << "\n";
    std::cout << "You walk up to the house, and it looks abandoned.\n";
    std::cout << "you see a window open on the second floor.\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - climb to window\n";
    std::cout << "2 - walk to front door\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 10
int InHouse()
{
    int command;
    std::cout << "\n";
    std::cout << "You walk up to the front door to find it unlocked.\n";
    std::cout << "you enter the house.\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - go upstairs\n";
    std::cout << "2 - go downstairs\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 11
int UnderTree()
{
    int command;
    std::cout << "\n";
    std::cout << "You sit under the tree and rest for a while\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - take a nap\n";
    std::cout << "2 - go home\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 12
int WalkHome()
{
    int command;
    std::cout << "\n";
    std::cout << "You start to walk home, and out jumps a bear!\n";
    std::cout << "+------------------------------+\n";
    std::cout << "1 - run past\n";
    std::cout << "2 - fight it\n";
    std::cout << "+------------------------------+\n";
    command = GetInput2();
    return command;
}

//screen 13
int EatenByBear()
{
    std::cout << "\n";
    std::cout << "You stay to fight the bear.\n";
    std::cout << "You lose and the bear gets a good meal.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

//screen 14
int FallFromHouse()
{
    std::cout << "\n";
    std::cout << "You climb the side of the house to the window,\n";
    std::cout << "but your hand slips and you fall head first.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

//screen 15
int BreakLeg()
{
    std::cout << "\n";
    std::cout << "You start to climb the tree. 15 feet up, the branch under you breaks.\n";
    std::cout << "You fall and break your leg. Its going to be a long night.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

//screen 16
int KeepWalking()
{
    std::cout << "\n";
    std::cout << "You Keep walking and find a path.\n";
    std::cout << "You follow the path back to your car.You get in and start the long drive home.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

//screen 17
int Trapped()
{
    std::cout << "\n";
    std::cout << "You start to walk down the stairs. They collapse under you.\n";
    std::cout << "You get up and look around. Your trapped.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

//screen 18
int LockedIn()
{
    std::cout << "\n";
    std::cout << "You Go upstairs and theres a door at the end of a hall.\n";
    std::cout << "You go through it, and it closes behind you, locking. Your locked in.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

//screen 19
int Lost()
{
    std::cout << "\n";
    std::cout << "You take a nap, and wake up in the dark.\n";
    std::cout << "You over slept, and now your not going to be able to find your way home.\n";
    std::cout << "\n";
    std::cout << "GAME OVER\n";
    std::cout << "+------------------------------+\n";
    return 0;
}

int main()
{
    int go = 1;
    int screen = 1;
    int choice;
    while (go == 1)
    {
        
      screen = GoToScreen(screen, choice);
    
        switch (screen) {
          
          case 1:
            choice = Start();
            break;
        
          case 2:
            choice = PathEnd();
            break;
            
          case 3:
            choice = NoPathRustle();
            break;
            
           case 4:
            choice = TripOnLog();
            break;
            
          case 5:
            choice = FindPond();
            break;
            
          case 6:
            choice = FindBear();
            break;
            
          case 7:
            choice = FindHouse();
            break;
            
          case 8:
            choice = FindTree();
            break;
            
          case 9:
            choice = EnterHouse();
            break;
            
          case 10:
            choice = InHouse();
            break;
            
          case 11:
            go = UnderTree();
            break;
            
          case 12:
            go = WalkHome();
            break;
            
          case 13:
            go = EatenByBear();
            break;
            
           case 14:
            go = FallFromHouse();
            break;
            
          case 15:
            go = BreakLeg();
            break;
            
          case 16:
            go = KeepWalking();
            break;
            
          case 17:
            go = Trapped();
            break;
            
          case 18:
            go = LockedIn();
            break;
            
          case 19:
            go = Lost();
            break;
            
        }
        
    }
    
}