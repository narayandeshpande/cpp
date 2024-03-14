
// 2.Write a C++ program to create a class Mobile which contains data members as Mobile_Id, Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using parameterized constructor. Display the values of Mobile object.
#include <iostream>
#include <string>
using namespace std;
class Mobile
{
    int m_id;
    double price;
    string m_name;

public:
    Mobile(int id, string name, double p)
    {
        m_id = id;
        m_name = name;
        price = p;
    }
    void Display()
    {
        cout << "Mobile id is " << m_id << endl;
        cout << "Mobile name is " << m_name << endl;
        cout << "Mobile price is " << price << endl;
    }
};
int main()
{
    int id;
    string name;
    double p;
    cout << "Enter Mobile id" << endl;
    cin >> id;
    cout << "Enter Mobile name" << endl;
    cin >> name;
    cout << "Enter Mobile price" << endl;
    cin >> p;
    Mobile m1(id,name,p);
    m1.Display();
}
