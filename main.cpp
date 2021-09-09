/*
Author: Man Kei Po
Course: CSCI-13500
Instructor: Zamansky
Assignment: Lab 2B
*/

#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
  int num1;
  int num2;
  cout << "Please enter L: ";
  cin >> num1;
  cout << "Please enter U: ";
  cin >> num2;
  print_interval(num1,num2);
  return 0;
}
