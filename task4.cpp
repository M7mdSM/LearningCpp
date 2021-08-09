#include <iostream>
using namespace std; 

class Player
{
    private:
    string m_name;
    double m_hp = 100;
    int m_level = 0;
    public:
    void SetName(string naming)
    {
        if (naming.length()<3 || naming.length()>14)
        {
            cout << "The name must be between 3-14 chars."<<endl;
            exit (3);
        }
        else if (naming.find(".") != std::string::npos || naming.find(",") != std::string::npos || naming.find("\'") != std::string::npos || naming.find("\"") != std::string::npos )
        {
            cout << "The name must not contain . or , or \' or \" "<<endl;
            exit(3);
        }
        else
        {
        m_name = naming;
        }
    }
    string GetName()
    {
        return m_name;
    }

    void SetHp(double health)
    {
        m_hp = health;
    }
    double GetHp()
    {
        return m_hp;
    }

    void SetLevel(int leveling)
    {
        m_level = leveling;
    }
    double GetLevel()
    {
        return m_level;
    }

    void Print()
    {
        cout << "The name of the plr is: "<< m_name<<endl;
        cout << "The hp of the plr is: "<< m_hp<<endl;
        cout << "The level of the plr is: "<< m_level<<endl;
    }
};

int main()
{
    Player P;
    string name;
    double healthhp;
    int level2;
    cout <<"Enter the name of the plr: "<<endl;
    getline(cin,name);
    P.SetName(name);

    cout << "Enter the hp: "<<endl;
    cin >> healthhp;
    P.SetHp(healthhp);
     
    cout << "Enter the level: "<<endl;
    cin >> level2;
    P.SetLevel(level2);

    P.Print();

}