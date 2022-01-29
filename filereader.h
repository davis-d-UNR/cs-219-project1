#include <iostream> 
#include <stdio.h>
#include <string>
#include <fstream>
#include <math.h>

/**
 * @file filereader.h
 * @author Davis Dunkley CS 219
 * @brief  this file is the header file to the fileReader.cpp
 * @version 0.1
 * @date 2022-01-28
 * 
 */
class fileReader
{
private:
    
    std::string addLine;
    std::string first; 
    std::string second;
    std::string readerStr;
    unsigned int one = 0;
    unsigned int two = 0;
    int sum;
    int carry = 0;
    
public:
    void readSetfile();
    void add(std::string first, std::string second);
    void sort(std::string first, std::string second);
    void calc();
    void print();
};