/*
Author: Man Kei Po
Course: CSCI-13500
Instructor: Zamansky
Assignment: Lab2C
*/
#include <iostream>
using namespace std;

int main() {
  int array[10];
  for(int i = 0; i < 10; i++){
	array[i] = 1;
	cout << array[i] << " ";
  }
  int num1;
  int num2;
  cout << "\n\nInput index: ";
  cin >> num1;
  cout << "Input value: ";
  cin >> num2;
  cout << "\n";
  while(num1 >= 0 && num1 < 10) {
	array[num1] = num2;
	for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
  	}	
	cout << "\n\nInput index: ";
	cin >> num1;
  	cout << "Input value: ";
  	cin >> num2;
	cout << "\n";	
  }
  cout << "Index of out range. Exit.";
  return 0;
}
