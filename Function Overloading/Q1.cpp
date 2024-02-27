// 1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and Sphere
#include <iostream>
using namespace std;
float Volume(int a)
{
    // Cube=a^3
    return (a * a * a);
}
float Volume(float r, float h)
{
    // Volume =  πr^2 × h
    return (3.14 * (r * r) * h);
}
float Volume(float r)
{
    // Volume of sphere = 4/3 πr^3
    return (4 / 3 * 3.14 * (r * r * r));
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
    cout << "Volume of cube is " << Volume(a) << endl;
    cout << "Volume of Sphere is " << Volume(r) << endl;
    cout << "Volume of Cylinder is " << Volume(r, h) << endl;
}
