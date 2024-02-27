#include<iostream>
#include<string>
using namespace std;
class Printdata{
public:
	void print(int num)
	{
	
	cout<<"value "<<num<<endl;
	}
	void print(string n)
	{
	cout<<"\""<<n<<"\""<<endl;
	
	}

};
int main()
{
Printdata p;
p.print(10);
p.print("hello");

}
