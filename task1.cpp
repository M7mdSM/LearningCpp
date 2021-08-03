#include <iostream>
using namespace std; 

bool  test (int *arr2, int &size)
{
    int count = 0;
    for (int i =0; i<size; i++)
    {
        if (arr2[i] == arr2[size-1-i])
        {
            count ++;
        }
    }

    if (count ==size)
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
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the array: "<<endl;
    for (int i =0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout <<boolalpha<< test(arr, size) << endl;
}