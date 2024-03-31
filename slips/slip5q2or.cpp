#include<iostream>
#include<string>
using namespace std;
class Book{
	string b_name,author;
	float price;
public:
	void input()
	{
		cout<<"Enter Book name"<<endl;
		cin>>b_name;
		cout<<"Enter Author name"<<endl;
		cin>>author;
		cout<<"Enter Book price"<<endl;
		cin>>price;
	}
	void display()
	{
		cout<<"Book name is :"<<b_name<<endl;
		cout<<"Author name is :"<<author<<endl;
		cout<<"Book Price is :"<<price<<endl;
	}
	void display(Book b[],int num,float p)
	{
		int count=0; 
		cout<<"Book details acording price"<<endl;
		for(int i=0;i<num;i++)
		{
			if(p==b[i].price)
			{
				count=1;
				b[i].display();
				
			}
		}
		if(count==0)
		{
			cout<<"No book find"<<endl;
		}
	
	}
	void display(Book b[],int num,string n)
	{
	 int count=0; 
		cout<<"Book details acording Author"<<endl;
			for(int i=0;i<num;i++)
		{
			if(n==b[i].author)
			{
				b[i].display();
				count=1;
			}
		}
		if(count==0)
		{
			cout<<"No book find"<<endl;
		}
	
	}
};
int main()
{
int num;
float p;
string n;
cout<<"Enter number of books"<<endl;
cin>>num;
Book b[num];
for(int i=0;i<num;i++)
{
b[i].input();
}
cout<<"Enter author name"<<endl;
cin>>n;
cout<<"Enter price value"<<endl;
cin>>p;
b[0].display(b,num,n);
b[0].display(b,num,p);

}