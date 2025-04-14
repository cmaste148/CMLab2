/*
Lab 2
Name: Cody Masterson
Date: 4/14/2024
IDE: Clion
Version: 1.0
Description: Working with files, arrays, and sorting algorithms
*/

#include "CMLab2.hpp"
#include <iostream>



int main()
{
    std::string names[SIZE], lnums[SIZE];
    std::string search;

    introMessage();
    int count = readFile(names, lnums, SIZE);
    displayArrays(names, lnums, count);
    sortArrays(names, lnums, count);
    std::cout << std::endl;
    displayArrays(names, lnums, count);
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter a name to search for: " << std::endl;
        std::cin >> search;

        if (binSearch(names, count, search) == true)
        {
            std::cout << search  << " is in the list "<< std::endl;
        }
        else
        {
            std::cout << search << " is not in the list "<< std::endl;
        }

    }

    return 0;
}
