// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: Lab01_02
Project Name: Average of five fixed numbers
File Name: AvgOfValues.cpp
Description: Calculate the average of five fixed numbers
Limitations or issues: Fixed values only, no user input
Credits: n/a
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{
	// 5 fixed variables to contain the numbers and 2 variables to contain the calculations.
	double num1 = 28;
	double num2 = 32;
	double num3 = 37;
	double num4 = 24;
	double num5 = 33;
	double total;
	double avg;

	// calculations
	total = num1 + num2 + num3 + num4 + num5;
	avg = total / 5;

	// print statements
	cout << "This program calculates the average of 5 fixed numbers.\n" << endl;
	cout << "The sum of the five numbers is: " << total << endl;
	cout << "The average of the five numbers is: " << avg << endl;

	system("pause");
	return 0;
}

/*
PROOF:

This program calculates the average of 5 fixed numbers.

The sum of the five numbers is: 154
The average of the five numbers is: 30.8
Press any key to continue . . .

*/