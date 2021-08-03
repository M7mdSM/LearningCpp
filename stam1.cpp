#include <iostream>
#include <cmath>

using namespace std;

int spaces (int &check)
{
    int count = 1;
    int check2;
    int i =10;
    while (true)
    {
        check2 = check/i;
        if(check2 > 0)
        {
            count ++;
        }
        else{
            break;
        }
        i*=10;
    }
    return count;
}

bool checking (long int &y)
{
    int length = spaces(y);
    int checking = length/3;
    int realcheck = pow(10, checking);
    if (length%3 == 0 && y %realcheck == y/length*length && y%realcheck == y / realcheck % realcheck )
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    cout << "Enter a num: "<<endl;
    int x;
    cin >> x;
    cout << "The number of digits: " <<spaces(x) << endl;
    cout << "Enter another num: " << endl;
    long int y;
    cin >> y;
    cout << checking(y);
    return 0;
}
