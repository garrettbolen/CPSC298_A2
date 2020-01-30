/*
Garrett Bolen
2324654
Assignment 2
Problem 2
*/

#include <iostream>
using namespace std;

int main(int charc, char **argv){
  int a[4][5];
  int input;
  cout << "Begin entering numbers: " << endl;

  //This for loop will iterate through each row and column of the 2D array
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      //This shows the current row and column and takes the user's input and places it in the current index
      cout << "Row " << i << ", Column " << j << ": ";
      cin >> input;
      a[i][j] = input;
    }
  }
  cout << "2D array filled." << endl;
  return 0;
}
