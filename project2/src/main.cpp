#include "funcs.h"

int main()
{
    int summation;
    summation = readNumber();
    summation += readNumber();
    writeNumber(summation);
    return 0;
}