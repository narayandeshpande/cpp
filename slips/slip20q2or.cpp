// Q2. Write a C++ program to read the contents of a “Sample.txt” file. Store all the uppercase
// characters in ”Upper.txt”, lowercase characters in ”Lower.txt” and digits in “Digit.txt” files.
// Change the case of each character from “Sample.txt” and store it in “Convert.txt” file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in;
    string str;
    in.open("simple.txt");
    ofstream up, lp, dp, cp;
    up.open("upper.txt");
    lp.open("lower.txt");
    dp.open("digit.txt");
    cp.open("conver.txt");
    while (in.eof() == 0)
    {
        getline(in, str);
        for (int i = 0; i < str.length(); i++)
        {
            if (isupper(str[i]))
            {
                up << str[i] << " ";
                char a = tolower(str[i]);
                cp << a << " ";
            }
            else if (islower(str[i]))
            {
                lp << str[i] << " ";
                char a = toupper(str[i]);
                cp << a << " ";
            }
            else if (isdigit(str[i]))
            {
                dp << str[i];
            }
        }
    }
    in.close();

    return 0;
}
