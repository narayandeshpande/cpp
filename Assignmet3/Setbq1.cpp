#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point()
    {
        x=10;
        y=99;
    }
    Point(Point &other)
    {
        x=other.x;
        y=other.y;
    }
    void display()
    {
        cout<<"Value of X is "<<x<<" value of y is "<<y<<endl;
    }
};
int main()
{
    Point p1,p2(p1);
    p1.display();
    p2.display();
}