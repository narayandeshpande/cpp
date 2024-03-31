// Q2.Create a class College containing data members as College_Id, College_Name, 
// Establishment_year, University_Name. Write a C++ program with following functions 
// a. Accept n College details 
// b. Display College details of specified University 
// c. Display College details according to Establishment year (Use Array of Objects and 
// Function Overloading). 
#include<iostream>
#include<string>
using namespace std;
class College{
	int c_id,e_year;
	string c_name,univercity_name;
public:
	void input()
	{
		cout<<"Enter College id "<<endl;
		cin>>c_id;
		cout<<"Enter College name"<<endl;
		cin>>c_name;
		cout<<"Enter Univercity name "<<endl;
		cin>>univercity_name;
		cout<<"Enter College Establishmet year"<<endl;
		cin>>e_year;
	}
	void display()
	{
		cout<<"College id is:"<<c_id<<endl;
		cout<<"College name is:"<<c_name<<endl;
		cout<<"Univercity name is:"<<univercity_name<<endl;
		cout<<"Establishment year is:"<<e_year<<endl;
	}
	void display(College c[],int num, int y)
	{
		cout<<"College details acording to establishmet year"<<endl;
		
		for(int i=0;i<num;i++)
		{
			if(c[i].e_year==y)
			{
				c[i].display();
			}
		}
	}
	
		void display(College c[],int num, string n)
	{
		cout<<"College details acording to univarsity"<<endl;
		for(int i=0;i<num;i++)
		{
			if(c[i].univercity_name==n)
			{
				c[i].display();
			}
		}
	}
};
int main()
{
int num,y;
string n;
cout<<"Enter the number of college"<<endl;
cin>>num;
College c[num];
for(int i=0;i<num;i++)
{
c[i].input();
}
cout<<"Enter establishment year"<<endl;
cin>>y;
cout<<"Enter university name"<<endl;
cin>>n;
c[0].display(c,num,n);
c[0].display(c,num,y);


}