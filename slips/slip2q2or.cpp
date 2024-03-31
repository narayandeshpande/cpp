// Q2.Write a C++ program to copy the contents of one file to another 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
ifstream in;
ofstream out;
string str;
in.open("my.txt");
out.open("another.txt");
while (in.eof()==0)
{
    getline(in,str);
    out<<str;
    out<<"\n";
}

}