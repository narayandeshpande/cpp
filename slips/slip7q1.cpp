// Q1.Write a C++ program using class which contains two data members as type integer. Create and 
// initialize the objects using default constructor, parameterized constructor with default value. 
// Write a member function to display maximum from given two numbers for all objects. 
#include <iostream>
using namespace std;
class Integer
{
    int num1, num2;

public:
    Integer()
    {
        num1 = 10;
        num2 = 30;
    }
    Integer(int num, int num22)
    {
        num1 = num;
        num2 = num22;
    }
    int max()
    {
       return(num1>num2)?num1:num2;
    }
};
int main()
{
    Integer i,i1(20,70);
    cout<<"Max number is "<<i.max()<<endl;
    cout<<"Max number is "<<i1.max()<<endl;

}