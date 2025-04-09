//
// Created by L00711689 on 4/9/2025.
//



#ifndef CMLAB2_HPP
#define CMLAB2_HPP

#include <string>

const int SIZE = 20;

void introMessage(); // Display program description
int readFile(std::string[], std::string[], int); // Read file and add elements to arrays
void sortArrays(std::string[], std::string[], int); // Insertion sort name array and match LNum array
void displayArrays(std::string[], std::string[], int); // Display arrays to console
bool binSearch(std::string[], int, std::string); // Perform a binary search

#endif //CMLAB2_HPP
