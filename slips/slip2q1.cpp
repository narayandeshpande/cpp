// Q1.Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both the 
// rectangles using friend function. 
#include<iostream>
using namespace std;
class Rectangle{
    double length,width;
public:
    Rectangle(double l,double w)
    {
        length=l;
        width=w;
    }
    friend void com(Rectangle r1,Rectangle r2);
    void display()
    {
        cout<<"Length is :"<<length<<" Width is "<<width<<endl;
    }
    double area()
    {
        return length*width;
    }
};
void com(Rectangle r1,Rectangle r2)
{
    if(r1.area() > r2.area())
    {
        cout<<"R1 is big"<<endl;
        return;
    }
    cout<<"R2 is big"<<endl;
}
int main()
{
    double l,w;
    cout<<"Enter length and width for first rectangle"<<endl;
    cin>>l>>w;
    Rectangle r1(l,w);
     cout<<"Enter length and width for second rectangle"<<endl;
    cin>>l>>w;
    Rectangle r2(l,w);
    com(r1,r2);
}