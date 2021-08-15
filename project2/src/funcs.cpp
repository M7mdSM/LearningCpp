#include "funcs.h"

int readNumber()
{
    int num;
    std::cout << "Enter a num: "<<std::endl;
    std::cin >> num;
    return num; 
}

void writeNumber(int sum)
{
    std::cout << "The summation of the nums is: "<<sum<<std::endl; 
}