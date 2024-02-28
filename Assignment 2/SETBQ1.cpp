#include <iostream>
#include <string>
using namespace std;
class Department
{
    int d_id, esta_year, no_of_faculty, no_of_student;
    string d_name;

public:
    void input()
    {
        cout << "Enter Department id " << endl;
        cin >> d_id;
        cout << "Enter Department name " << endl;
        cin >> d_name;
        cout << "Enter number of teachers in  Department  " << endl;
        cin >> no_of_faculty;
        cout << "Enter number of students in  Departmen " << endl;
        cin >> no_of_student;
        cout << "Enter Department establishmet year " << endl;
        cin >> esta_year;
    }
    void output()
    {
        cout << "Department id is " << d_id << endl;
        cout << "Department name is " << d_name << endl;
        cout << "Number of teachers in  Department is " << no_of_faculty << endl;
        cout << "Number of students in  Department is " << no_of_student << endl;
        cout << "Department eshtablishmet year is " << esta_year << endl;
    }
    void specific_name(Department d[], string n, int num)
    {
        cout << "This Department detail is :" << endl;
        for (int i = 0; i < num; i++)
        {
            if (n == d[i].d_name)
            {
                d[i].output();
                return;
            }
        }
    }
    void specific_year(Department d[], int n, int num)
    {
        cout << "This Department detail is :" << endl;
        for (int i = 0; i < num; i++)
        {
            if (n == d[i].esta_year)
            {
                d[i].output();
                return;
            }
        }
    }
};
int main()
{
    int num;
    cout<<"Enter number of Department"<<endl;
    cin>>num;
    Department d[num];
    cout<<"Enter Department details"<<endl;
    for(int i=0;i<num;i++)
    {
        d[i].input();
    }
    d[0].specific_name(d,"CApplication",num);
    d[0].specific_year(d,2021,num);
}
