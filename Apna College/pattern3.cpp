// Q:
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value of N"<<endl;
    cin>>num;
    for (int i = num; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    

}