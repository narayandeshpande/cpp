// Write a C++ program to accept length and width of a rectangle. Calculate and display perimeter as well as area of a rectangle by using inline function.
#include<iostream>
using namespace std;
inline float area(float l,float w)
{
    return (l/w);
}
inline float perimeter(float l,float w)
{
    return (2*(l/w));
}
int main()
{
    float length,width;
    cout<<"Enter value of length and width"<<endl;
    cin>>length>>width;
    cout<<"The area of rectangle is "<<area(length,width)<<endl;
    cout<<"The perimeter of rectangle is "<<perimeter(length,width)<<endl;
}
