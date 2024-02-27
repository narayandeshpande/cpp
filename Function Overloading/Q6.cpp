// 10.	Write a C++ program to implement a class ‘student’ to overload following functions as follows: 
//a. int maximum(int, int) – returns the maximum score of two students
// b. int maximum(int *a, int arraylength) – returns the maximum score from an array ‘a’.
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    int mark;

    void input()
    {
        cout<<"Enter student roll number"<<endl;
        cin>>roll;
        cout<<"Enter student name"<<endl;
        cin>>name;
        cout<<"Enter your marks "<<endl;
        cin>>mark;
    }
    int maximum(int m1,int m2)
    {
        return(m1>m2?m1:m2);
    }
    int maximum( Student *a,int num)
    {
        int max=a[0].mark;
        for(int i=0;i<num;i++)
        {
            if(max<a[i].mark)
            max=a[i].mark;
        }
        return max;
    }
};
int main()
{
    Student s1,s2,s[100];
    cout<<"Enter dateils of student 1 "<<endl;
    s1.input();
    cout<<"Enter dateils of student 2 "<<endl;
    s2.input();
    cout<<"Max mark between this two student is "<<s1.maximum(s1.mark,s2.mark)<<endl;
    int num;
    cout<<"Enter number of student"<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    s[i].input();
cout<<"Max mark between this array student is "<<s[0].maximum(s,num)<<endl;


}