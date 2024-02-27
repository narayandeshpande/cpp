// 5.	Write C++ program to create a class Employee containing data members Emp_no, Emp_Name, Designation and Salary. Create and initialize the objects using default, parameterized and Copy Constructor. Also write member function to calculate Income tax of the employee which is 20% of salary
#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int emp_no;
    string emp_name, Designation;
    double salary;

public:
    Employee()
    {
        emp_no = 0;
        emp_name = "XYZ";
        Designation = "Employee";
        salary = 0;
    }
    Employee(int no, string name, string d, double s)
    {
        emp_no = no;
        emp_name = name;
        Designation = d;
        salary = s;
    }
    Employee(Employee &e)
    {
        emp_no = e.emp_no;
        emp_name = e.emp_name;
        Designation = e.Designation;
        salary = e.salary;
    }
    double Calculate_Salary()
    {
        double tax = 0.2 * salary;
        return tax;
    }
    void display()
    {
        cout << "Employee id is :" << emp_no << endl;
        cout << "Employee name is :" << emp_name << endl;
        cout << "Employee Designation is :" << Designation << endl;
        cout << "Employee salary is :" << salary << endl;
    }
};
int main()
{
    int no;
    string name, designation;
    double salary;
    cout << "Enter Employee id" << endl;
    cin >> no;
    cout << "Enter Employee name" << endl;
    cin >> name;
    cout << "Enter Employee Designation" << endl;
    cin >> designation;
    cout << "Enter Employee salary" << endl;
    cin >> salary;
    Employee e(no, name, designation, salary);
    cout << "Employee tax is " << e.Calculate_Salary() << endl;
    Employee e1(e);
    e1.display();
}