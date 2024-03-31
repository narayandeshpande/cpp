// Q2. Create two base classes Learn_Info(Roll_No, Stud_Name, Class, Percentage) and 
// Earn_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info from 
// above two classes. Write necessary member functions to accept and display Student 
// information. Calculate total money earned by the student. (Use constructor in derived class)
#include<iostream>
#include<string>
using namespace std;
class Learn_Info{
    protected:
    int r_no;
    string name,sclass;
    double per;
    public:
    Learn_Info(int n,string na,string s,double p)
    {
        r_no=n;
        name=na;
        sclass=s;
        per=p;
    }
    void printData1()
    {
        cout<<"Roll number of this student is: "<<r_no<<endl;
        cout<<"Name of this student is: "<<name<<endl;
        cout<<"Class of this student is: "<<sclass<<endl;
        cout<<"Persentage of given student is: "<<per<<endl;
    }
}; 
class Earn_info{
    protected:
    double No_of_hours_worked, Charges_per_hour;
    public:
    Earn_info(double n,double c)
    {
        No_of_hours_worked=n;
        Charges_per_hour=c;
    }
    void printData2()
    {
        cout<<"No of hours worked is: "<<No_of_hours_worked<<endl;
        cout<<"Charges per hour is: "<<Charges_per_hour<<endl;
    }
};
class Earn_Learn_info:public Learn_Info,public Earn_info{
    public:
    Earn_Learn_info(int n,string na,string s,double p,double n1,double c):Learn_Info(n,na,s,p),Earn_info(n1,c){};
    void studentinfo()
    {
        cout<<"Given student information is:"<<endl;
        printData1();
        printData2();
    }
    double calculatemoney()
    {
        double total=No_of_hours_worked*Charges_per_hour;
        cout<<"Given student total money is: "<<total<<endl;
    }
};
int main()
{
    Earn_Learn_info s1(52,"narayan","sybca",8.82,2,100);
    s1.studentinfo();
    s1.calculatemoney();
}
