#include <iostream>
using namespace std; 

bool  IsSymmetric (int *arr2, int &size)
{
    int count = 0;
    for (int i =0; i<size; i++)
    {
        if (arr2[i] == arr2[size-1-i])
        {
            count ++;
        }
    }

    return (count ==size);
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
    cout <<boolalpha<< IsSymmetric(arr, size) << endl;
}