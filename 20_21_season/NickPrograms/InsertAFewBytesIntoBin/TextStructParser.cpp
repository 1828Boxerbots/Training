// InsertAFewBytesIntoBin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

//SIZE OF LINE: 0x3A

struct txtStruct
{
    std::string m_time;
    unsigned int m_frameCount;
    unsigned long long m_mSec;
    double m_gyro;
    double m_left;
    double m_right;
}parsedTime;

/*
notes:
strtod for string to double
*/

int main()
{
    //load the text file and put it into a single string:
    std::ifstream in("./recording_2021-03-29_17-07-55_A.txt");
    std::stringstream buffer;
    buffer << in.rdbuf();
    std::string test = buffer.str();
    //std::cout << test << std::endl << std::endl;

    //create variables that will act as "cursors". we'll take everything between them.
    size_t pos1 = 0;
    size_t pos2;

    txtStruct tempStruct;

    for (int x = 0; x <= 5; x++)
    {
        pos2 = test.find(" ", pos1);
        tempStruct.m_time = test.substr(pos1, (pos2 - pos1));
        std::cout << tempStruct.m_time << std::endl;
        pos1 = pos2 + 1;

        pos2 = test.find(" ", pos1);
        tempStruct.m_frameCount = test.substr(pos1, (pos2 - pos1));
        std::cout << tempStruct.m_frameCount << std::endl;
        pos1 = pos2 + 1;
    }
}