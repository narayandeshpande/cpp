#include<iostream>
using namespace std;
class Number{
    int num;
    public:
    Number(int n)
    {
        num=n;
    }
    int sum()
    {
        int sum=0;
        for (int i = 1; i <= num; i++)
        {
            sum+=i;
        }
        return sum;
        
    }
};
int main()
{
    Number n1(10);
    cout<<"Sum of number 1 to 10 is "<<n1.sum()<<endl;;
}