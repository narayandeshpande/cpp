// Q2.Create a class String which contains a character pointer (Use new and delete operator). 
// Write a C++ program to overload following operators: 
// a. ! To reverse the case of each alphabet from given string 
// b. == To check equality of two strings 
#include<iostream>
#include<cstring>
using namespace std;
class String{
    char *str;
    int size;
    public:
    String(const char *s){
        str=new char[strlen(s)+1];
        size=strlen(s);
        strcpy(str,s);
    }
    ~String(){
        delete [] str;
    }
    String operator!(){
        char *temp=new char[strlen(str)+1];
        for(int i=0;i<size;i++)
        {
            if(islower(str[i]))
            {
                temp[i]=toupper(str[i]);
            }
            else if(isupper(str[i]))
            {
                temp[i]=islower(str[i]);
            }
            else{
                temp[i]=str[i];
            }
        }
        return String(temp);
    }
    bool operator==(String &obj)
    {
        return strcmp(str,obj.str)==0;
    }
    void display()
    {
        cout<<str<<endl;;
    }

};
int main()
{
    String s1("jay shri ram");
    String s2("hello");
    String s3=!s1;
    s3.display();
    cout<<"Two strings are same or not "<<(s1==s2);

}