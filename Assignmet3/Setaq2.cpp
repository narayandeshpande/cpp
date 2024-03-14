#include<iostream>
using namespace std;
class SimpleIntrest{
    //  S.I = (P × R × T)/100,;
    double p,r,t;
    public:
    SimpleIntrest(double pp,double tt,double rr=10 )
    {
        p=pp;
        t=tt;
        r=rr;
    }
    void display()
    {
        cout<<"Principl amout is "<<p<<endl;;
        cout<<"interest rate is "<<r<<endl;
        cout<<" time duration is "<<t<<endl;
    }
    double calculate()
    {
        return (p*r*t)/100;
    }
};
int main()
{
    SimpleIntrest p1(10000,4);
    cout<<"The simple intrest is "<<p1.calculate()<<endl;;
    p1.display();
}
