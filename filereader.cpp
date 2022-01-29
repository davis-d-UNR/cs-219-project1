/**
 * @file filereader.cpp
 * @author Davis Dunkley CS 219
 * @brief  this file will read the txt file and cacluate the hex score of each summation
 * @version 0.1
 * @date 2022-01-28
 * 
 */
#include "filereader.h"
//passes in the file to strings
//no parameters
//no returns
void fileReader::readSetfile()
{
    std::ifstream reader("/home/davis/Downloads/Programming-Project-1.txt");
    while(reader) 
    {
        reader >> addLine >> first >> second;
        add(first, second);
    }
}
//this function erases the 0x from the hex numbers
//no parameters
//no returns
void fileReader::add(std::string first1, std::string second1)
{
 first1 = first1.substr(2,first1.length());
 second1 = second1.substr(2,second1.length());
 sort(first1, second1);
}
//sorts each string character into values and calls the calc functions to sort there values in hex
//no parameters
//no returns
void fileReader::sort(std::string first1, std::string second1)
{
   
    for(int x = first1.length(); x >= 0;x--)
    {
        switch (first1[x])
        {
        case '1':
            one  = 1;
            
            break;
        case '2':
            one  = 2;
            break;
        case '3':
            one  = 3;
             break;
        case '4':
            one  = 4;
             break;
        case '5':
            one  = 5;
             break;
        case '6':
            one  = 6;
             break;
        case '7':
            one  = 7;
             break;
        case '8':
            one  = 8;
             break;
        case '9':
            one  = 9;
             break;
        case 'A':
            one  = 10;
             break;
        case 'B':
            one  = 11;
             break;
        case 'C':
            one  = 12;
             break;
        case 'D':
            one  = 13;
             break;
        case 'E':
            one  = 14;
             break;
        case 'F':
            one  = 15;
             break;             
        }
        switch (second1[x])
        {
        case '1':
            two  = 1;
             break;
        case '2':
            two  = 2;
             break;
        case '3':
            two  = 3;
             break;
        case '4':
            two  = 4;
             break;
        case '5':
            two  = 5;
             break;
        case '6':
            two  = 6;
             break;
        case '7':
            two  = 7;
             break;
        case '8':
            two  = 8;
             break;
        case '9':
            two  = 9;
             break;
        case 'A':
            two  = 10;
             break;
        case 'B':
            two  = 11;
             break;
        case 'C':
            two  = 12;
             break;
        case 'D':
            two  = 13;
             break;
        case 'E':
            two  = 14;
             break;
        case 'F':
            two = 15;
        }
        sum = one + two;
        calc();
    }
    print();
}
//calcuates the function and assigns it to hex
//no parameters
//no returns
void fileReader::calc()
{
    sum += carry;
    carry = sum / 16;
    if(carry == 1)
    {
        sum -= 10;
        carry = 1;
    }
   
    switch (sum)
    {
    case 1: 
        readerStr.push_back('1');
        break;
    case 2: 
        readerStr.push_back('2');
        break;
    case 3: 
        readerStr.push_back('3');
        break;
    case 4: 
        readerStr.push_back('4');
        break;
    case 5: 
        readerStr.push_back('5');
        break;
    case 6: 
        readerStr.push_back('6');
        break;
    case 7: 
        readerStr.push_back('7');
        break;
    case 8: 
        readerStr.push_back('8');
        break;
    case 9: 
        readerStr.push_back('9');
        break;
    case 10: 
        readerStr.push_back('A');
        break;
    case 11: 
        readerStr.push_back('B');
        break;
    case 12: 
        readerStr.push_back('C');
        break;
    case 13: 
        readerStr.push_back('D');
        break;
    case 14: 
        readerStr.push_back('E');
        break;
    case 15: 
        readerStr.push_back('F');
        break;
    default:
        break;
    }

}
//prints the string to display
//no parameters
//no returns
void fileReader::print()
{   
   std::cout << readerStr << std::endl;
   readerStr.erase();
}