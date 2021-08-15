#include <iostream>
using namespace std;
class IntPair
{
    public:
    int m_a, m_b;
    void set(int a,int b )
    {
        m_a =a;
        m_b = b;
    }
    void print ()
    {
        cout << "Pair("<<m_a<<", "<<m_b<<")" << endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter 2 nums: "<<endl;
    cin >>a;
    cin >>b;
    IntPair p1;
    p1.set(a, b);
    p1.print();
    return 0;
}