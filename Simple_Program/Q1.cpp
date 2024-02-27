// 1.Write a C++ program to check if number is prime or not.
#include <iostream>
using namespace std;
int main() {
  int num, count = 0;
  cout << "Enter your number" << endl;
  cin >> num;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      count++;
    }
  }
  if (count == 2) {
    cout << "Number is prime " << endl;
  } else {
    cout << "Number is not prime " << endl;
  }
  return 0;
}