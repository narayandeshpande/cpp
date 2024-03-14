
// 4.Write a C++ program to create a class Date which contains three data members as dd,mm,yyyy. Create and initialize the object by using parameterized constructor and display date in dd-month-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month.
#include <iostream>
using namespace std;
class Date
{
    int dd, mm, yyyy;

public:
    Date(int d, int m, int y)
    {
        dd = d;
        mm = m;
        yyyy = y;
    }
    void output()
    {
        cout << "Your date before the conversion is :" << dd << " : " << mm << " : " << yyyy << endl;
        cout << "After conversion data is :" << endl;
        switch (mm)
        {
        case 1:
            cout << dd << " Jan " << yyyy << endl;
            break;
        case 2:
            cout << dd << " Feb " << yyyy << endl;
            break;
        case 3:
            cout << dd << " Mar " << yyyy << endl;
            break;
        case 4:
            cout << dd << " Apr " << yyyy << endl;
            break;
        case 5:
            cout << dd << " May " << yyyy << endl;
            break;
        case 6:
            cout << dd << " Jun " << yyyy << endl;
            break;
        case 7:
            cout << dd << " Jul " << yyyy << endl;
            break;
        case 8:
            cout << dd << " Aug " << yyyy << endl;
            break;
        case 9:
            cout << dd << " Sept " << yyyy << endl;
            break;
        case 10:
            cout << dd << " Oct " << yyyy << endl;
            break;
        case 11:
            cout << dd << " Nov " << yyyy << endl;
            break;
        case 12:
            cout << dd << " Dec " << yyyy << endl;
            break;
        }
    }
};
int main()
{
    int d,m,y;
    cout<<"Enter your data"<<endl;
    cin>>d;
    cout<<"Enter your month"<<endl;
    cin>>m;
    cout<<"Enter your year"<<endl;
    cin>>y;
    Date d1(d,m,y);
    d1.output();
}
