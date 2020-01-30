/*
Garrett Bolen
2324654
Assignment 2
Problem 4
*/

#include <iostream>
using namespace std;

float addTax(float, float);

int main(int charc, char **argv){
  cout << addTax(23.4, 53.32) << endl;
  return 0;
}

float addTax(float taxRate, float cost){\
  //The tax rate is converted to a decimal and incremented for easy multiplication
  taxRate /= 100;
  taxRate += 1;
  //The cost is multiplied by the tax rate to yield the total cost
  float total = cost * taxRate;
  return total;
}
