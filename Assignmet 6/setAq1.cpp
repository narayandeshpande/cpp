#include<iostream>
using namespace std;
class Number{
    int num;
public:
    Number()
    {
        cout<<"Enter value of Num"<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"Value of Num is: "<<num<<endl;
    }
    void operator++()
    {
        num++;
    }
    Number operator++(int)
    {
        Number temp=*this;
        ++num;
        return temp;
    }
};
int main()
{
    Number n1;
    n1.display();
    ++n1;
    n1.display();
    n1++;
    n1.display();
}