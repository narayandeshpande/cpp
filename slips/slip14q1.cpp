// Q1. Write a C++ program to interchange values of two integer numbers (use call by reference).
#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
    int temp=(*p);
    (*p)=(*q);
    (*q)=temp;
}
int main()
{
    int a=10,b=30;
    cout<<"Value of A and B is before swaping "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"Value of A and B is after swaping "<<a<<" "<<b<<endl;
}