// Q2.Create a class String which contains a character pointer (Use new and delete operator) 
// Write a C++ program to overload following operators 
// a. ! To reverse the case of each alphabet from given string. 
// b. [ ] To print a character present at specified index 
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class String{
    char *str;
public:
    String(const char *ch)
    {
        str=new char[strlen(ch)+1];
        strcpy(str,ch);
    }
    ~String()
    {
        delete [] str;
    }
    String operator!()
    {
        char *temp=new char[strlen(str)+1];
        for(int i=0;i<strlen(str);i++)
        {
            if(islower(str[i]))
            {
                temp[i]=toupper(str[i]);
            }
            else if(isupper(str[i]))
            {
                temp[i]=tolower(str[i]);
            }
            else{
                temp[i]=str[i];
            }
        }
        temp[strlen(str)]='\0';
        return String(temp);
    }
    char operator[](int index)
    {
        if(index>=0 && index<strlen(str))
        {
            return str[index];
        }
        else{
            return '\0';
        }
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    String s1("narayan");
    s1.display();
    String s2=!s1;
    s2.display();
    cout<<"Charecter at index 2 is "<<s1[2];
}