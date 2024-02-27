// Write a C++ program to check minimum and maximum of two integer number (use inline function and conditional operator).
#include<iostream>
using namespace std;
inline float max(float a,float b)
{
    return (a>b)?a:b;
}
inline float min(float a,float b)
{
    return (a<b)?a:b;
}
int main()
{
    float a,b;
    cout<<"Enter value of A and B"<<endl;
    cin>>a>>b;
    cout<<"Maximum value between two is "<<max(a,b)<<endl;
    cout<<"Minimum value between two is "<<min(a,b)<<endl;
}
