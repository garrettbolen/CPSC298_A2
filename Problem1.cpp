/*
Garrett Bolen
2324654
Assignment 2
Problem 1
*/

#include <iostream>
using namespace std;

int main(int charc, char **argv){

  //The variable arrSize is declared and the user inputs its value
  int arrSize;
  cout << "How many digits would you like to enter (up to 10): ";
  cin >> arrSize;

  //If the value is over ten or less than 0, it will default to equal 10
  if(arrSize > 10 || arrSize < 0)
  arrSize = 10;

  //A dynamic array is allocated on the heap using the user's selected size
  int* numberArray = new int[arrSize];

  //This for loop will gather inputs and store them in each index
  int input;
  for(int i = 0; i < arrSize; ++i){
    cout << "Input " << i+1 << ": ";
    cin >> input;
    if(input < 0)
    input = -input;
    numberArray[i] = input;
  }

  //This for loop will print each index in the array
  for(int i = 0; i < arrSize; ++i)
  cout << numberArray[i] << endl;
  return 0;

}
