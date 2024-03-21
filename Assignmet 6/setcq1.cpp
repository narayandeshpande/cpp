#include<iostream>
using namespace std;
class Fraction{
    double nume,denume;
    public:
    Fraction(){
        nume=0;
        denume=0;
    }
    friend istream& operator>>(istream& is,Fraction &obj)
    {
        cout<<"Enter value of numerator"<<endl;
        is>>obj.nume;
        cout<<"Enter value of denumerator"<<endl;
        is>>obj.denume;
        return is;
    }
    friend ostream& operator<<(ostream& o,Fraction &obj)
    {
        o<<"Value of numerator is:"<<obj.nume<<endl;
        o<<"Value of denumerator is:"<<obj.denume<<endl;
        return o;
    }
    void operator++()
    {
        nume++;
        denume++;
    }
    void operator--()
    {
        nume--;
        denume--;
    }
    int operator<(Fraction &obj)
    {
        if(nume<obj.nume && denume<obj.denume)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    Fraction f1,f2;
    cin>>f1;
    cin>>f2;
    cout<<f1;
    cout<<f2;
    int a=f1<f2;
    if(a==1)
    {
        cout<<"Facation one is big"<<endl;
    }
    else{

        cout<<"Facation one is not  big"<<endl;
    }
}