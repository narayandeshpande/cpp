// Q1.Write a C++ program to implement a class ‘student’ to overload following functions as follows:
// a. int maximum(int, int) – returns the maximum score of two students
// b. int maximum(int *a, int arraylength) – returns the maximum score from an array ‘a’
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int max(int a, int b)
    {
        if (a > b)
        {
            cout << "First student marks is max" << endl;
            return a;
        }
        cout << "Second student marks is max" << endl;
        return b;
    }

    int max(int *a, int len)
    {
        int maxmark = a[0];
        for (int i = 0; i < len; i++)
        {
            if (a[i] > maxmark)
                maxmark = a[i];
        }
        cout << "Max mark in given array is:" << maxmark << endl;
        return maxmark;
    }
};
int main()
{
    Student s1;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int len= (sizeof(a) / sizeof(*a));
    s1.max(10,50);
    s1.max(a,len);
}