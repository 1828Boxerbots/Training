// HelloWorldProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello, I am Jarvis\n";
    int age;
    char name[256];
    char y;


    std::cout << "what is your name?...\n";
    std::cin >> name;

    std::cout << "how old are you\n";
    std::cin >> age;
    if (age > 5)
    {
        std::cout << "Hello ";
        std::cout << name;
        std::cout << ", you are ";
        std::cout << age;
        std::cout << " years old";
        std::cout << ".\n";
        std::cout << "My name is Jarvis, I am your personal computer, i am here whenever you need me.\n";
    }
    else;
    {
        std::cout << "You're too young";
    };
}


    