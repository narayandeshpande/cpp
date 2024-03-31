// Q2. Implement the following class hierarchy:
// Employee: code, ename, desg
// Manager (derived from Employee): year_of_experience, salary
// Define appropriate functions to accept and display details.
// Create n objects of the manager class and display the records.
// Write main function that uses the above class and its member functions.
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    int code;
    string name, desc;

public:
    Employee()
    {
        cout << "Enter Employee code:" << endl;
        cin >> code;
        cout << "Enter employee name: " << endl;
        cin >> name;
        cout << "Enter designation:" << endl;
        cin >> desc;
    }
    void display()
    {
        cout << "Empoyee code is: " << code << endl
             << "Empoyee name is: " << name << endl
             << "Empoyee designation is: " << desc << endl;
    }
};
class Manager : public Employee
{
    int exc;
    double salary;

public:
    Manager()
    {
        cout << "Enter Manager salary: " << endl;
        cin >> salary;
        cout << "Enter Manager experienc: " << endl;
        cin >> exc;
    }
    void display1()
    {
        display();
        cout << "Salary is: " << salary << endl
             << "Experienc is: " << exc << endl;
    }
};
int main()
{
    int num=2;
    Manager m[num];
    for (int i = 0; i < num; i++)
    {
        m[i];
    }
    for (int i = 0; i < num; i++)
    {
        m[i].display1();
    }

    
}
