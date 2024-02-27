// 1.	Write the definition for a class Cylinder that contains data members radius and height. The class has the following member functions:
// a. void setradius(float) to set the radius of data member.
// b. void setheight(float) to set the height of data member.
// c. float volume( ) to calculate and return the volume of the cylinder.
// Write a C++ program to create cylinder object and display its volume.
#include <iostream>
using namespace std;
class Cylinder
{
    float radius, height;

public:
    void setradius(float r)
    {
        radius=r;
    }
    void setheight(float h)
    {
        height=h;
    }
    float volume()
    {
        return 3.14*radius*radius*height;
    }
};
int main()
{
    float r,h;
    Cylinder c1;
    cout<<"Radius of the cylender "<<endl;
    cin>>r;
    cout<<"Enter height of the cylender "<<endl;
    cin>>h;
    c1.setradius(r);
    c1.setheight(h);
    cout<<"Volume of the given cylender is "<<c1.volume()<<endl;

}
