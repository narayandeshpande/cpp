// Q1.Write a C++ program to print area of circle, square and rectangle using inline function. 
#include<iostream>
using namespace std;
inline float area(float r)
{
    return (3.14*r*r);
}
inline float square(float s)
{
    return(s*s);
}
inline float rectangle(float l,float b)
{
    return (l*b);
}
int main()
{
    float redius,side,length,breth;
    cout<<"Enter value of redius"<<endl;
    cin>>redius;
    cout<<"Enter value of side"<<endl;
    cin>>side;
    cout<<"Enter value of length"<<endl;
    cin>>length;
    cout<<"Enter value of breth"<<endl;
    cin>>breth;
    cout<<"The area of circle is "<<area(redius)<<endl;
    cout<<"The square of the circle is "<<square(side)<<endl;
    cout<<"The rectangle of the circle is "<<rectangle(length,breth)<<endl;


}