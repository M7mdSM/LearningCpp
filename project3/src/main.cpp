#include "prim.h"

int main()
{
    int num;
    std::cout << "Enter a num: "<<std::endl;
    std::cin >> num;
    std::cout << std::boolalpha << primaryTest(num);
    return 0;
}