//05.10.2023
#include <iostream>
using namespace std;

int get_last_digit(int n) {
  return n % 10;
}

int sum_of_digits(int n) {
  if (n == 0) {
    cout<<"Invalid input";
  } else {
    return get_last_digit(n) + sum_of_digits(n / 10);
  }
  return 0;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "The sum of the digits of the number is: " << sum_of_digits(n) << endl;
  return 0;
}  