#include<iostream>
#include<string>
using namespace std;
class Employee{
    double salary;
    public:
        Employee(){
            cout<<"Enter Employee salary:"<<endl;
            cin>>salary;
        }
        void display(){
            cout<<"Salary is: "<<salary<<endl;
        }
        void operator++()
        {
            salary++;
        }
        void operator--()
        {
            salary--;
        }
        Employee operator++(int)
        {
            Employee temp=*this;
            ++salary;
            return temp;
        }
        Employee operator--(int)
        {
            Employee temp=*this;
            --salary;
            return temp;
        }

};
int main()
{
    Employee e1;
    e1.display();
    e1++;
    e1.display();
    --e1;
    e1.display();
    ++e1;
    e1.display();
    e1--;
    e1.display();
}