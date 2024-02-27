   
#include<iostream>
#include<string>
using namespace std;

class person
{
 float mno;
 string pname,city;
 public:
 void assign()
 {
  cout<<"Enter Person name,city name and Mobile no :";
  cin>>pname>>city>>mno;
 }
 
 void display()
 {
  cout<<pname<<"\t"<<city<<"\t"<<mno<<endl;
 }
 void display(string city_name)
 {
  if(city==city_name)
  display();
 }
 void display(float m_no)
 {
  if(mno==m_no)
  display();
 }
};

int main()
{
 int n;
 string city_name;
 float m_no;
 cout<<"How many persons :  ";
 cin>>n;
 person c[n];
 for(int i=0;i<n;i++)
 {
  c[i].assign();
  c[i].display();
 }
 
 cout<<"Enter city name to display information : ";
 cin>>city_name;
 
 for(int i=0;i<n;i++)
 {
  c[i].display(city_name);
 }
 
 cout<<"Enter Mobile No to display information : ";
 cin>>m_no;
 
  for(int i=0;i<n;i++)
 {
  c[i].display(m_no);
 }
 
 return 0;
}
