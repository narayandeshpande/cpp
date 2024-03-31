// Q2:Write a C++ program to design a class complex to represent complex number. The complex class 
// uses an external function (as a friend function) to add two complex number. The function should 
// return an object of type complex representing the sum of two complex Numbers. 
#include<iostream>
using namespace std;
class Complex{
    double real,ima;
    public:
    Complex(double r,double i)
    {
        real=r;
        ima=i;
    }
    friend Complex add(Complex a1,Complex a2)
    {
        double addr=a1.real+a2.real;
        double addi=a1.ima+a2.ima;
        return Complex(addr,addi);
    }
    void display()
    {
        cout<<"Real part is: "<<real<<endl;
        cout<<"Imaginary part is: "<<ima<<endl;
    }
};
int main()
{
    Complex a1(10.5,7.6);
    Complex a2(4.6,8.5);
    Complex addnum=add(a1,a2);
    addnum.display();

}