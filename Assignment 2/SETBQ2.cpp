#include <iostream>
#include <string>
using namespace std;
class Bus
{
    int b_no, no_of_seats;
    string b_name, s_point, d_point;

public:
    void input()
    {
        cout << "Enter Bus no" << endl;
        cin >> b_no;
        cout << "Enter Bus name" << endl;
        cin >> b_name;
        cout << "Enter no of seats in bus" << endl;
        cin >> no_of_seats;
        cout << "Enter Bus starting point" << endl;
        cin >> s_point;
        cout << "Enter Bus destination point" << endl;
        cin >> d_point;
    }
    void output()
    {
        cout<<"Bus no is "<<b_no<<endl;
        cout<<"Bus name is "<<b_name<<endl;
        cout<<"No. of seats in bus is "<<no_of_seats<<endl;
        cout<<"Bus starting point is "<<s_point<<endl;
        cout<<"Bus destination point is "<<d_point<<endl;
    }
    void specific(Bus b[],string sp,string dp,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(sp==b[i].s_point && dp==b[i].d_point)
            b[i].output();
        }
    }
};
int main()
{
    int num;
    cout<<"Enter number of buses"<<endl;
    cin>>num;
    Bus b[num];
    for(int i=0;i<num;i++)
    b[i].input();

    b[0].specific(b,"parbhani","pune",num);
}