/*
Author: Man Kei Po
Course: CSCI-13500
Instructor: Zamansky
Assignment: Lab2D

I realized that the number is bigger than the max-value of c++, therefore it went negative.
*/
#include <iostream>
using namespace std;

int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  cout << fib[0] << endl;
  cout << fib[1] << endl;
  for(int i = 2; i < 60; i++) {
	fib[i] = fib[i-1] + fib[i-2];
	cout << fib[i] << endl;
  }
  return 0;
}
