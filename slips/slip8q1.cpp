// Q1.Write a C++ program to subtract two integer numbers of two different classes using friend 
// function. 
#include<iostream>
using namespace std;
class Intager{
    int num;
    public:
    Intager(int x)
    {
        num=x;
    }
    friend int add(Intager i1,Intager i2);
    void print()
    {
        cout<<"Number is : "<<num<<endl;
    }
};
int add(Intager i1,Intager i2)
{
    return i1.num+i2.num;
}
int main()
{
    Intager i1(10),i2(20);
    cout<<"Addition of two number is "<<add(i1,i2);
}