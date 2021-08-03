#include<iostream>

using namespace std;

void calc(int *ptr2, int val, int from, int to)
{
    double size = sizeof(ptr2)/sizeof(ptr2[0]);
    
    int length = to - from;
    for(int i =0; i< length; i++,from++)
    {
        ptr2[from] = val; 
    }
    ending :
    ;
}


int main()
{
    int size, from, to;
    cout << "Enter the size of the array: "<< endl;
    cin >> size;
    int *ptr = new int [size];
    double val;
    cout <<"Enter the nums: "<<endl;
    for (int i = 0 ; i<size; i++)
    {
        cin >> ptr[i];
    }
    cout<<"Enter the from:"<<endl;
    cin >> from;
    cout<<"Enter the to:"<<endl;
    cin >> to;
    cout<<"Enter the value:"<<endl;
    cin >> val;
    cout <<endl;
    calc(ptr, val, from, to);
    for(int i=0; i<size; i++)
    {
        cout << ptr[i]<<endl;
    }
    
    return 0;
}
