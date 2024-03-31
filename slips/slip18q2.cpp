// Q2.Write a C++ program to read student information such as rollno, name and percentage of n 
// students. Write the student information using file handling. 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in;
    string str;
    in.open("student.txt");
    cout<<"Roll number| Name | per"<<endl;
    while (in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    return 0;
}