/*
Garrett Bolen
2324654
Assignment 2
Problem 5
*/

#include <iostream>
using namespace std;

//Function prototypes
float getLength();
float toMeter();
float toCentimeter();
void output();

int main(int charc, char **argv){
  while(true){
    output();
    cout << "Type 'exit' to quit or 'c' to continue: ";
    string input = "";
    cin >> input;
    if(input == "exit")
    break;
    else
    continue;
  }
  return 0;
}

//This function reads in feet and inches from the user
float getLength(){
  float ft;
  float in;

  cout << "Enter the total feet: ";
  cin >> ft;

  cout << "Enter the total inches: ";
  cin >> in;
  //The length is converted entirely into feet
  ft += (in/12);
  return ft;
}

//This function converts feet to meters
float toMeter(float len){
  float m = len * .3048;
  return m;
}

//This function converts feet to centimeters
float toCentimeter(float len){
  float cm = (len * .3048) * 100;
  return cm;
}

//This function calls the other two functions to output the results of the conversions
void output(){
  float len = getLength();
  cout << "Length in meters: " << toMeter(len) << endl;
  cout << "Length in centimeters: " << toCentimeter(len) << endl;
}
