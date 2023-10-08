#include <iostream>
using namespace std;
int main() {
  int number, temp;
  int remainder = 0, reverse = 0;
  cin >> number;
  temp = number;
  while (temp != 0) {
    remainder = temp % 10;
    reverse = reverse * 10 + remainder;
    temp = temp / 10;
  }

  if (number == reverse) {
    cout << "is palindrome";
  } else {
    cout << "not a palindrome";
  }
}