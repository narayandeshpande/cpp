// Q1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and 
// Sphere. 
#include<iostream>
using namespace std;
int volume(int a)
{
    return a*a*a;
}
float volume(float r,float h)
{
    return (3.14*(r*r)*h);
}
float volume(float r)
{
    // Volume of sphere = 4/3 πr^3
    return (4/3*3.14*(r*r*r));
}
int main()
{
    float r, h;
    int a;
    cout << "Enter the value of A" << endl;
    cin >> a;
    cout << "Enter the value of redius" << endl;
    cin >> r;
    cout << "Enter the value of height" << endl;
    cin >> h;
    cout << "Volume of cube is " << volume(a) << endl;
    cout << "Volume of Sphere is " << volume(r) << endl;
    cout << "Volume of Cylinder is " << volume(r, h) << endl;
}
