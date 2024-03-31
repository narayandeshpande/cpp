// Q2. Write a C++ program to define a class Bus with the following specifications: Bus No, Bus 
// Name, No of Seats, Starting point, Destination .Write a menu driven program by using 
// appropriate manipulators to 
// a. Accept details of n buses. 
// b. Display all bus details. 
// // c. Display details of bus from specified starting point to destination 
#include <iostream>
#include <string>
using namespace std;
class Bus
{
    int bno, no_of_seats;
    string b_name, starting_p, destination_p;

public:
    void Accept()
    {

        cout << "Enter bus number" << endl;
        cin >> bno;
        cout << "Enter bus name" << endl;
        cin >> b_name;
        cout << "Enter no_of_seats " << endl;
        cin >> no_of_seats;
        cout << "Enter bus starting point" << endl;
        cin >> starting_p;
        cout << "Enter bus destination point" << endl;
        cin >> destination_p;
    }
    void printData()
    {
        cout << "Bus number is " << bno << endl;
        cout << "Bus name is " << b_name << endl;
        cout << "number of seates is " << no_of_seats << endl;
        cout << "Bus starting point is " << starting_p << endl;
        cout << "Bus destination point is " << destination_p << endl;
    }
    bool check(string s, string d)
    {
        return (s == starting_p && d == destination_p);
    }
};
int main()
{
    Bus b[100];
    for (int i = 0; i < 1; i++)
    {
        b[i].Accept();
    }
    for (int i = 0; i < 1; i++)
    {
        b[i].printData();
    }
    for (int i = 0; i < 1; i++)
    {
        if (b[i].check("parbhani", "pune"))
        {
            b[i].printData();
        }
    }
}
