// File_Creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <string.h>
#include <fstream>
#include <ctime>

int main()
{

    std::tm timeOut;
    std::time_t time = std::time(nullptr);
    localtime_s(&timeOut, &time);

    //Sets max characters available
    char outputStr[2560];
    char fileName[2560];
    //grabs the exact time down to the second. quoted stuff is just assigning the amount of characters available per slot
    sprintf_s(outputStr, "%04d_%02d_%02d_%02d_%02d_%02d", timeOut.tm_year + 1900, timeOut.tm_mon, timeOut.tm_mday, timeOut.tm_hour, timeOut.tm_min, timeOut.tm_sec);

    sprintf_s(fileName, "C:\\Users\\FIRSTMentor\\Desktop\\Zach-yek\\Txt Files\\filegobrr_%s.txt", outputStr);

    std::ofstream recordFile;

    recordFile.open(fileName);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
