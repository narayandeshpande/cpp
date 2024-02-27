// 3.	Write a C++ program to display factors of a number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number "<<endl;
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }
    
}