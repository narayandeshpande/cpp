//Write a C++ program to calculate following series: (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n)
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        int sum1=0;
        for (int j = 1; j <=i; j++)
        {
            sum1+=j;
        }
        sum+=sum1;
    }
    cout<<"Answer of this given series is "<<sum<<endl;
    
}