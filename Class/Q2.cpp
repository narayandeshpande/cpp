// Create a class Time which contains data members as: Hours, Minutes and Seconds. Write a C++ program to perform following necessary member functions:
// a.	To read time 
// b.	To display time in format like: hh:mm:ss 
// c.	To add two different times (Use Objects as argument)

#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;
public:
    void ReadTime()
    {
        cout<<"Enter time value in 24 Hours"<<endl;
        cout<<"Enter the value of hours"<<endl;
        cin>>hr;
        if(hr>24)
        {
            cout<<"Enter value of hours in 24 format"<<endl;
            cin>>hr;
        }
        cout<<"Enter value of minutes"<<endl;
        cin>>min;
        if(min>60)
        {
            cout<<"Enter valid minutes value"<<endl;
            cin>>min;
        }
        cout<<"Enter the value of second"<<endl;
        cin>>sec;
        if(sec>60)
        {
            cout<<"Enter valid minutes value"<<endl;
            cin>>sec;
        }
    }
    void DisplayTime(){
        cout<<"The time is:"<<endl;
        cout<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
    void AddTime(Time t1,Time t2)
    {
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min+sec/60;
        sec=sec%60;
        hr=t1.hr+t2.hr+min/60;
        min=min%60;
    }
};
int main()
{
    Time t1,t2,t3;
    cout<<"Enter first time value"<<endl;
    t1.ReadTime();
    t1.DisplayTime();
    cout<<"Enter second time value"<<endl;
    t2.ReadTime();
    t2.DisplayTime();
    t3.AddTime(t1,t2);
    cout<<"After adding time value is "<<endl;
    t3.DisplayTime();


}