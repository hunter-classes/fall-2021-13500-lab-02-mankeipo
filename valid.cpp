/*
Author: Man Kei Po
Course: CSCI-13500
Instructor: Zamansky
Assignment: Lab2A
*/

#include <iostream>
using namespace std;
#include <math.h>  
int main() {
  int num;
  cout << "Please enter an integer: ";
  cin >> num;
  while(num < 1 || num > 99) {
	cout << "Pleae re-enter: ";
	cin >> num;
  }
  cout << "\nNumber squared is " << pow(num,2) << endl;
}
