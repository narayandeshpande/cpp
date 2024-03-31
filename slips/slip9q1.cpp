// Q1. Write a C++ program to create a class Item with data members Item_code, Item_name, Item_Price. 
// Write member functions to accept and display item information and also display number of objects 
// created for a class. (Use Static data member and Static member function) 
#include<iostream>
#include<string>
using namespace std;
class Item{
    int i_code;
    string i_name;
    double i_price;
    static int count;
    public:
    void setdata()
    {
        cout<<"Enter item code"<<endl;
        cin>>i_code;
        cout<<"Enter item name"<<endl;
        cin>>i_name;
        cout<<"Enter item price"<<endl;
        cin>>i_price;
        count++;
    }
    void getdata()
    {
        cout<<"Item code is: "<<i_code<<endl<<"Item name is: "<<i_name<<endl<<"Item price is: "<<i_price<<endl;
    }
    static void getcount()
    {
        cout<<"The value of counter is: "<<count<<endl;
    }
};
int Item::count;
int main()
{
    Item i;
    i.setdata();
    i.getdata();
    Item::getcount();
}