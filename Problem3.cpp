/*
Garrett Bolen
2324654
Assignment 2
Problem 3
*/

#include <iostream>
using namespace std;

//Function prototype
void zeroBoth(int&, int&);

int main(int charc, char **argv){

  //These two variables are initialized as 2 and 3 before the function call
  int n1 = 2;
  int n2 = 3;
  zeroBoth(n1, n2);
  //After the function call, they are both equal to zero
  cout << n1 << endl;
  cout << n2 << endl;
  return 0;
}

void zeroBoth(int &n1, int &n2){
  n1 = 0;
  n2 = 0;
}
