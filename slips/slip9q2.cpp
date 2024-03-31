//  Q2. Create a Base class Train containing protected data members as Train_no, Train_Name. Derive a 
// class Route(Route_id, Source, Destination) from Train class. Also derive a class Reservation 
// (Number_of_Seats, Train_Class, Fare, Travel_Date) from Route. Write a C++ program 
// to perform following necessary functions: 
// a. Enter details of n reservations 
// b. Display details of all reservations 
// c. Display reservation details of a specified Train class
#include<iostream>
#include<string>
using namespace std;
class Train{
    protected:
    int t_no;
    string t_name;
    public:
    void setData()
    {
        cout<<"Enter train number:"<<endl;
        cin>>t_no;
        cout<<"Enter train name: "<<endl;
        cin>>t_name;
    }
    void getData()
    {
        cout<<"Train number is: "<<t_no<<endl<<"Train name is: "<<t_name<<endl;
    }
};
class Route: public Train{
    protected:
    int Route_id;
     string Source, Destination;
     public:
    void setData()
    {
        Train::setData();
        cout<<"Enter train source:"<<endl;
        cin>>Source;
        cout<<"Enter route id:"<<endl;
        cin>>Route_id;
        cout<<"Enter train destination: "<<endl;
        cin>>Destination;
    }
    void getData()
    {
        Train::getData();
        cout<<"Train source is: "<<Source<<endl<<"Train destination is: "<<Destination<<endl<<"route id is: "<<Route_id;
    }
};
class Reservation:public Route{
    public:
    int Number_of_Seats; 
    string Train_Class, Travel_Date;
    double Fare; 
    public:
    void setdatar()
    {
        Route::setData();
        cout<<"Enter number of seats"<<endl;
        cin>>Number_of_Seats;
        cout<<"Enter train class"<<endl;
        cin>>Train_Class;
        cout<<"Enter Travel Date"<<endl;
        cin>>Travel_Date;
        cout<<"Enter amount"<<endl;
        cin>>Fare;
    }
    void getData()
    {
        Route::getData();
        cout<<"Number of seats"<<Number_of_Seats<<endl<<"train class is:"<<Train_Class<<endl<<"Travel Date is:"<<Travel_Date<<endl<<"Ticket amount is: "<<Fare<<endl;
    }
    // c. Display reservation details of a specified Train class
    void displayclasswise(string c,int num,Reservation r[])
    {
        for (int i = 0; i < num; i++)
        {
            if(r[i].Train_Class==c)
            {
                r[i].getData();
            }
        }
    }
};
int main()
{
    int n=2;
    Reservation r[n];
    cout<<"Enter resalvaton data"<<endl;
    for (int i = 0; i < n; i++)
    {
        r[i].setdatar();
    }
    r[0].displayclasswise("local",n,r);
    
}