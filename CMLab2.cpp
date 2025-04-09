//
// Created by L00711689 on 4/9/2025.
//

#include "CMLab2.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>

void introMessage()
{
    std::cout << "*Intro Message*" << std::endl;
}

int readFile(std::string names[], std::string lnums[], int max)
{
    bool flag;
    int count = 0;
    std::string fileName;
    std::cout << "Please enter the name of the file you would like to open" << std::endl;
    do
    {
        flag = false;
        std::cin >> fileName;
        std::ifstream inFile(fileName);
        if (inFile.good())
        {
            for (int i = 0; i < max; i++)
            {
                inFile >> names[i] >> lnums[i];
                count++;
            }
            inFile.close();
        }
        else
        {
            flag = true;
            std::cout << "File name invalid, Try again" << std::endl;
        }

    } while (flag == true);

    return count;
}

void sortArrays(std::string names[], std::string lnums[], int count)
{

}

void displayArrays(const std::string names[], const std::string lnums[], int count)
{
    std::cout << "  Names  |  Lnums  \n --------|-------- " << std::endl;
    for ( int i = 0; i < count; i++)
    {
        std::cout << std::setw(9) << names[i]
        << "|" << lnums[i] << std::endl;
    }

}

bool binSearch(const std::string array[], int count, const std::string term)
{
    return true;
}
