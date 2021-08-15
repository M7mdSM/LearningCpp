#include "prim.h"

bool primaryTest(int num)
{
    
    for (int i = 2; i<10; i++)
    {
        if (num == i)
        {
            continue;
        }
        else if (num == 1)
        {
            return false;
        }
        if (num % i ==0)
        {
            return false;
        }
    }
    return true;
}