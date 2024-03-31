 // Q1.Write a C++ program to create a class employee containing salary as a data member. Write 
// necessary member functions to overload the operator unary pre and post decrement "--" 
// for decrementing salary. 
#include<iostream>
#include<string>
using namespace std;
class Employee{
    int emp_id;
    double salary;
    string name;
public:
    Employee(){
        cout<<"Enter Employee id: "<<endl;
        cin>>emp_id;
        cout<<"Enter employee name:"<<endl;
        cin>>name;
        cout<<"Enter employee salary"<<endl;
        cin>>salary;
    }
    void getData()
    {
        cout<<"Employee id is: "<<emp_id<<endl<<"Employee name is: "<<name<<endl<<"Employee salary is:"<<salary<<endl;
    }
   Employee& operator--() {
        --salary;
        return *this;
    }
    Employee operator--(int) {
        Employee temp = *this;
        --(*this); // Utilizing the pre-decrement operator overload
        return temp;
    }
};
int main()
{
    Employee e1;
    --e1;
    e1.getData();
    e1--;
    e1.getData();


}