// Q2. Design a base class Product(Product _Id, Product _Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys n Products. Calculate total price,
// total discount and display bill using appropriate manipulators.
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Product
{
    protected:
    int p_id;
    string p_name;
    double p_price;

public:
    void setData()
    {
        cout << "Enter product id: " << endl;
        cin >> p_id;

        cout << "Enter product name: " << endl;
        cin >> p_name;

        cout << "Enter product price: " << endl;
        cin >> p_price;
    }
 
};
class Discount:public Product{
    int per;
    public:
    void set(){
        Product::setData();
        cout<<"Enter discount is persentage: "<<endl;
        cin>>per;
    }
    void getData()
    {
        // cout<<"Product id is: "<<p_id<<endl<<"Product name is: "<<p_name<<endl<<"Product is is: "<<p_price<<endl;
        double des=calculateper();
    cout<< p_id << setw(20) << p_name << setw(10) << p_price << setw(10) <<setw(10)<<per<<setw(10)<<des<<endl;

    }
    double calculateper()
    {
         //(price * discountPercentage) / 100.0;
         double dis=(p_price*per)/100.0;
         double price=p_price-dis;
        //  cout<<p_price<<" "<<per;
            return price;

    }
};
int main()
{
    int n=1;
    Discount d[n];
    for (int i = 0; i < n; i++)
    {
        d[i].set();
    }
    for (int i = 0; i < n; i++)
    {
        d[i].getData();
    }

    
}