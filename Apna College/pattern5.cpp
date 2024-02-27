// Q
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include<iostream>
using namespace std;
int main()
{
    int count=1,num;
    cout<<"Enter value of N"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }
}