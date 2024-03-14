#include<iostream>
using namespace std;
class Number{
    int num1,num2;
    public:
    Number(int num,int num3)
    {
        num1=num;
        num2=num3;
    }
    Number()
    {
        num1=10;
        num2=20;
    }
    void max()
    {
        if(num1>num2)
        {
            cout<<"max is "<<num1<<endl;
            return ;
        }
        cout<<"max is "<<num2<<endl;
    }
    void display()
    {
        cout<<num1<<" "<<num2;
    }
};
int main()
{
    Number n1(10,60),n2;
    n1.max();
    // n1.display();
    n2.max();
    // n2.display();


}