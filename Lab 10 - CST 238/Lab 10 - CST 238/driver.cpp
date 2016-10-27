/*---------------------------------------------------------------------
Driver program to test the Stack class.
----------------------------------------------------------------------*/
//Erik Ring-Walters
//10/27/2016
//CST 238 Lab 10
//Reverse string stack exercise
//ID: 002488407
#include <iostream>
using namespace std;
#include <string>
#include "Stack.h"

int main()
{
	Stack s;
	string userInputtedString, reverseString;
	char currentChar;
	cout << "Please enter a string => \n";
	cin >> userInputtedString;
	for (int i = 0; i < userInputtedString.length(); i++)
	{
		s.push(userInputtedString[i]);
	}
	for (int i = 0; i < userInputtedString.length() ; i++)
	{	
		reverseString += s.top();
		s.pop();
	}
	cout << "Your string: " << userInputtedString << endl;
	cout << "Reverse string: " << reverseString << endl;
}