// Programming Math Problems - Lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
	cout << "Hello, my name is Adam and I'm going to solve the equation:\n";
	cout << "Ax + B = 0\n";
	cout << "For x\n\n";
	
	float A;
	float B;
	float X;

	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "\n";
	cout << "Solving " << A << "x+" << B << "=0 for x...\n" << endl;
	
	X = (B*(-1)/A);
	cout << "The answer is:\n" << X << endl;

	return 0;
}