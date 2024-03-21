#include<iostream>
using namespace std;
class Complex{
    double real,imaginary;
    public:
    Complex(double r,double i){
        real=r;
        imaginary=i;
    }
    void print()
    {
        cout<<"Value of real part is:"<<real<<endl;
        cout<<"Value of imaginary part is: "<<imaginary<<endl;
    }
    Complex operator+(Complex &obj)
    {
       
        double r=real+obj.real;
        double i=imaginary+obj.imaginary;
        Complex temp(r,i);
        return temp;
        
    }
    Complex operator*(Complex &obj)
    {
       
        // double r=real+obj.real;
        // double i=imaginary+obj.imaginary;
        Complex temp(real*obj.real,imaginary*obj.imaginary);
        return temp;
    }
};
int main()
{
    Complex c1(10,40),c2(30,60);
    Complex c3=c1+c2;
    cout<<"Addition of two complex number is:"<<endl;
    c3.print();
    Complex c4=c1*c2;
    cout<<"Multipication of two complex number is:"<<endl;
    c4.print();
}