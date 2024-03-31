 // Q2. Create a class Fraction containing data members as Numerator and Denominator. 
// Write a program to overload operators ++ , -- and * to increment, decrement a Fraction and 
// multiply two Fraction respectively. (Use constructor to initialize values of an object)
#include<iostream>
using namespace std;
class Fraction{
    int Numerator,Denominator;
    public:
    Fraction(int n,int d)
    {
        Numerator=n;
        Denominator=d;

    }
    void printData()
    {
        cout<<"Your data is:-"<<Numerator<<"/"<<Denominator<<endl;
    }
    void operator++()
    {
        Numerator++;
        Denominator++;
    }
    void operator--()
    {
        Numerator--;
        Denominator--;
    }
    Fraction operator*(Fraction &other)
    {
        int n=(Numerator*other.Denominator)*(Denominator*other.Numerator);
        int d=(Denominator*other.Denominator);
        return Fraction(n,d);
    }
};
int main()
{
    Fraction f1(1,6),f2(5,7);
    f1.printData();
    f2.printData();
    cout<<"Multipication of this two fraction number is:"<<endl;
    Fraction f3=f1*f2;
    f3.printData();
   
}