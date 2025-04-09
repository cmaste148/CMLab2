/*
Lab 2
Name: Cody Masterson
Date: 4/9/2024
IDE: Clion
Version: 1.0
Description:
*/

#include "CMLab2.hpp"
#include <iostream>

/*
void insertSort(int array[], int count)
{

    // Code taken from lecture

    // insert next value into sorted
    // start of the array
    for(int i = 1; i < count; i++)
    {
        int value = array[i];
        int j = i - 1;
        // now move items up to find the right place for value
        while (j >= 0 and array[j] > value)
        {
            array[j+1] = array[j];
            j -= 1;
        }
        // found the place!
        // but decremented j once too many times ...
        array[j+1] = value;
    }

}
*/

int main()
{

    introMessage();
    std::string names[SIZE], lnums[SIZE];
    int count = readFile(names, lnums, SIZE);
    std::cout << count << std::endl;
    //displayArrays(names, lnums, count);

    return 0;
}
