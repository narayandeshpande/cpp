// 1.	Write a C++ program to create a class Array that contains one float array as member. Overload the Unary ++ and -- operators to increase or decrease the value of each element of an array. Use friend function for operator function.
#include<iostream>
using namespace std;
class Array{
    float *arr;
    int size;
    public:
    Array(int num , float *f)
    {
        size=num;
        arr=new float[num];
        for (int i = 0; i < num; i++)
        {
           arr[i]=f[i];
        }   
    }
    ~Array(){
        delete []arr;
    }
    void printdata()
    {
        cout<<"Array value is"<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }
 friend void operator++(Array& obj);
 friend void operator--(Array &obj);
};
void operator++(Array &obj)
{
    for(int i=0;i<obj.size;i++)
    {
        obj.arr[i]++;
    }
}
void operator--(Array &obj)
{
    for(int i=0;i<obj.size;i++)
    {
        obj.arr[i]--;
    }
}
int main()
{
    float f[3]={1.2,1.7,3.8};
    Array a(3,f);
    a.printdata();
    ++a;
    cout<<"Array value after incresing"<<endl;
    a.printdata();
    --a;
    cout<<"Array value after decresing"<<endl;
    a.printdata();
}
