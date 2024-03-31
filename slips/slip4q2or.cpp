// Q2.Create a base class Flight containing protected data members as Flight_no, Flight_Name. Derive
// a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats,
// class, fare, travel_date) from Route. Write a C++ program to perform the following necessary
// functions.
// a. Enter details of n reservations.
// b. Display reservation details of Business class.
#include <iostream>
#include <string>
using namespace std;
class Flight
{
protected:
    string f_name, f_no;

public:
    void setData(string f_n, string f)
    {
        f_name = f_n;
        f_no = f;
    }
    void display()
    {
        cout << "Flight name is: " << f_name << endl;
        cout << "Flight No. is: " << f_no << endl;
    }
};
class Route : public Flight
{
protected:
    string src, dest;

public:
    void setData(string s, string d)
    {
        src = s;
        dest = d;
    }
    void display()
    {
        cout << "Flight source is: " << src << " and Destination is: " << dest << endl;
    }
};
class Reservation : public Route
{
    int no_seats;
    string Class, travel_date;
    double fare;

public:
    void setData()
    {
        int n;
        string s, d, f_n, f1, c, td;
        double f;
        cout << "Enter number of seats" << endl;
        cin >> n;
        cout << "Enter travel date" << endl;
        cin >> td;
        cout << "Enter class" << endl;
        cin >> c;
        cout << "Enter amoute of ticket" << endl;
        cin >> f;
        cout << "Flight name is: " << endl;
        cin >> f_n;
        cout << "Flight No. is: " << endl;
        cin >> f1;
        cout << "Flight source is: " << endl;
        cin >> s;
        cout << "Flight destination is: " << endl;
        cin >> d;
        Flight::setData(f_n, f1);
        Route::setData(s, d);
        no_seats = n;
        Class = c;
        travel_date = d;
        fare = f;
    }
    void display()
    {
        Flight::display();
        Route::display();
        cout << "No. of seats is: " << no_seats << endl
             << "Class is: " << Class << endl
             << "Travel date is: " << travel_date << endl
             << " Ticket price is: " << fare << endl;
    }
    void Business(int size, Reservation r[])
    {
        cout << "Detail of Business class travels:" << endl;
        for (int i = 0; i < size; i++)
        {
            if (r[i].Class == "Business" || r[i].Class == "business")
            {
                r[i].display();
            }
        }
    }
};
int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;
    Reservation r[size];
    for (int i = 0; i < size; i++)
    {
        r[i].setData();
    }
    r[0].Business(size, r);
}