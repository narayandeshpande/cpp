#include<iostream>
#include<string>
using namespace std;
class Employee{
    int emp_no;
    string name;
    float basic_salary,DA,HRA,allowances;
    public:
    void input()
    {
        cout<<"Enter employee no."<<endl;
        cin>>emp_no;
        cout<<"Enter employee name."<<endl;
        cin>>name;
        cout<<"Enter employee basic salary."<<endl;
        cin>>basic_salary;
        cout<<"Enter employee DA."<<endl;
        cin>>DA;
        cout<<"Enter employee HRA."<<endl;
        cin>>HRA;
        cout<<"Enter employee allowances."<<endl;
        cin>>allowances;
    }
    void output()
    {
        cout<<"Employee No. is "<<emp_no<<endl;
        cout<<"Employee name. is "<<name<<endl;
        cout<<"Employee basic salary is "<<basic_salary<<endl;
        cout<<"Employee DA is "<<DA<<endl;
        cout<<"Employee HRA is "<<HRA<<endl;
        cout<<"Employee allowances is "<<allowances<<endl;
    }
};