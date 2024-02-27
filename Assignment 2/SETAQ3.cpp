#include <iostream>
#include <string>
using namespace std;
class Dritrict
{
    int d_code, population;
    string d_name;
    double area_sqft;
    float literacy_rate;

public:
    void input()
    {
        cout << "Enter Dritrict code " << endl;
        cin >> d_code;
        cout << "Enter Dritrict name " << endl;
        cin >> d_name;
        cout << "Enter Dritrict population " << endl;
        cin >> population;
        cout << "Enter Dritrict area " << endl;
        cin >> area_sqft;
        cout << "Enter Dritrict literacy rate " << endl;
        cin >> literacy_rate;
    }
    void output()
    {
        cout << "Dritrict code is " << d_code << endl;
        cout << "Dritrict name is " << d_name << endl;
        cout << "Dritrict population is " << population << endl;
        cout << "Dritrict area is " << area_sqft << " square fit " << endl;
        cout << " literacy rate of Dritrict  is " << literacy_rate << endl;
    }
    void highest_literacy_rate(Dritrict d[], int n)
    {
        cout << "highest literacy rate Dritrict is" << endl;
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (d[l].literacy_rate < d[i].literacy_rate)
                l = i;
        }
        d[l].output();
    }
    void highest_population(Dritrict d[], int n)
    {
        cout << "highest population Dritrict is" << endl;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (d[p].population < d[i].population)
                p = i;
        }
        d[p].output();
    }
};
int main()
{
    int num;
    cout<<"Enter number of Dritrict"<<endl;
    cin>>num;
    Dritrict d[num];
    cout<<"Enter Dritrict detail"<<endl;
    for(int i=0;i<num;i++)
    d[i].input();
    cout<<"All Dritrict detail is"<<endl;
    for(int i=0;i<num;i++)
    d[i].output();
    d[0].highest_literacy_rate(d,num);
    d[0].highest_population(d,num);
}
