// Q1.Write a C++ program to implement a class printdata to overload print function as follows: 
// void print(int) - outputs value followed by the value of the integer. 
// Eg. print(10) outputs - value 10 
// void print(char *) – outputs value followed by the string in double quotes. 
// Eg. print(“hi”) outputs value “hi” 
#include<iostream>
using namespace std;
class Printdata{
    public:
    void print(int x)
    {
        cout<<"Value "<<x<<endl;
    }
    void print(const char *ch)
    {
        cout<<"\""<<ch<<"\""<<endl;
    }
};
int main()
{
    Printdata p1;
    p1.print(10);
    p1.print("narayan");
}