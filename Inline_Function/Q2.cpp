//Write a C++ program to read two float numbers. Perform arithmetic binary operations +,-,*,/ on these numbers using inline function. Display the resultant value.
#include<iostream>
using namespace std;
inline float add(float a,float b)
{
    return a+b;
}
inline float sub(float a,float b)
{
    return a-b;
}
inline float mul(float a,float b)
{
    return a*b;
}
inline float div(float a,float b)
{
    return a/b;
}
int main()
{
    float a,b;
    cout<<"Enter value of A and B"<<endl;
    cin>>a>>b;
    cout<<"Addition of given two number is "<<add(a,b)<<endl;
    cout<<"Subtraction of given two number is "<<sub(a,b)<<endl;
    cout<<"Multipication of given two number is "<<mul(a,b)<<endl;
    cout<<"Division of given two number is "<<div(a,b)<<endl;
}
