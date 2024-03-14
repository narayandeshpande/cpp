#include <iostream>
#include <string>
using namespace std;
class Worker
{
    string w_name;
    int No_of_days_worked;
    double pay_rate;

public:
    Worker()
    {
        w_name = "xyz";
        No_of_days_worked = 0;
        pay_rate = 0;
    }
    Worker(string name, int no, double p)
    {
        w_name = name;
        No_of_days_worked = no;
        pay_rate = p;
    }
    Worker(Worker &obj)
    {
        w_name = obj.w_name;
        No_of_days_worked = obj.No_of_days_worked;
        pay_rate = obj.pay_rate;
    }
    void display()
    {
        cout<<"Worker name is: "<<w_name<<endl;
        cout<<"Number of days worked is: "<<No_of_days_worked<<endl;
        cout<<"pay rate of one day  is: "<<pay_rate<<endl;
    }
    double calculate()
    {
        double salary=pay_rate*No_of_days_worked;
        cout<<"Salary of this worker is "<<salary<<endl;
        return salary;
        
    }
};
int main()
{
    Worker w1("narayan",10,1000);
    w1.display();
    w1.calculate();
}