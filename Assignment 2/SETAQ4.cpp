#include<iostream>
#include<string>
using namespace std;
class String{
    public:
    void length(string s)
    {
        int l=s.length();
        cout<<"Length of  given string is "<<l<<endl;
    }
    void concat(string s1,string s2)
    {
        string con=s1+s2;
        cout<<"Two string after concatination is "<<con<<endl;
    }
    void conpare(string s1,string s2)
    {
        if(s1==s2)
        {
            cout<<"Two strings are same"<<endl;
            return;
        }
        cout<<"Two strings are not same"<<endl;
    }
    void reverse(string s)
    {
         int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        ++start;
        --end;
    }
    cout<<"String after reverse : "<<s<<endl;
    }
};
int main()
{
    String s;
    s.length("Narayan");
    s.conpare("narayan","Narayan");
    s.concat("Narayan ","Deshpande");
    s.reverse("Narayan");
}