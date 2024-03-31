//  Q2.Write a C++ program to create a class Distance which contains data members as kilometer, meter. 
// Write a program to perform the following functions 
// a.To accept distance 
// b.To display distance 
// c.To overload > operator to compare two distance 
#include<iostream>
#include<string>
using namespace std;
class Distance{
     double km,me;
public:
Distance()
{
    cout<<"Enter value of kilometer"<<endl;
    cin>>km;
    
    cout<<"Enter value of meter"<<endl;
    cin>>me;
}
void display()
{
    cout<<"kilometer value is: "<<km<<endl;
    cout<<"Meter value is: "<<me<<endl;
}
bool operator>(const Distance &obj)
{
    if(km>obj.km && me>obj.me)
    {
        cout<<"First object is greater"<<endl;
    }
    else if(km<obj.km && me<obj.me)
    {
        cout<<"Second object is greater"<<endl; 
    }
    else
    {
        cout<<"We cannot compare"<<endl;
    }
}
};
int main()
{
    Distance d1,d2;
    if(d1>d2)
    {

    }
}
