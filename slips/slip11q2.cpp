// Q2.Write a C++ program to create a class Person that contains data members as Person_Name, City,
// Mob_No. Write a C++ program to perform following functions:
// a. To accept and display Person information
// b. To search the Person details of a given mobile number
// c. To search the Person details of a given city.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Person
{
    string p_name, city;
    double mob_no;

public:
    Person()
    {
        cout << "Enter person name:" << endl;
        cin >> p_name;
        cout << "Enter pesron city:" << endl;
        cin >> city;
        cout << "Enter person mobile number:" << endl;
        cin >> mob_no;
    }
    void display()
    {
        cout << "Person name:" << setw(20) << "Person city:" << setw(20) << "Person mobile number:" << setw(20) << endl;
        cout << p_name << setw(20) << city << setw(20) << mob_no << setw(20) << endl;
    }
    void Search(double mo, Person p[], int num)
    {
        for (int i = 0; i < num; i++)
        {
            if (p[i].mob_no == mo)
            {
                p[i].display();
            }
        }
    }
    void Search(string cy, Person p[], int num)
    {
        for (int i = 0; i < num; i++)
        {
            if (p[i].city == cy)
            {
                p[i].display();
            }
        }
    }
};
int main()
{
    int num=2;
    Person p[num];
    for (int i = 0; i < num; i++)
    {
        p[i];
    }
    for (int i = 0; i < num; i++)
    {
        p[i].display();
    }
}