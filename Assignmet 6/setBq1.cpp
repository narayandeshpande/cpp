#include<iostream>
using namespace std;
class Number{
    int num;
    public:
    Number():num(0){}
    friend istream& operator>>(istream& is,Number &obj)
    {
        cout<<"Enter value of num"<<endl;
        is>>obj.num;
        return is;
    }
    friend ostream& operator<<(ostream& o,Number &obj)
    {
        o<<"value of Num is: "<<obj.num<<endl;
        return o;
    }
};
int main()
{
    Number n;
    cin>>n;
    cout<<n;
}