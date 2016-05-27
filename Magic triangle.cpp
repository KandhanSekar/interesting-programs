// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

void printspace(int a)											//space to make it look beautiful
{
	for (; a >= 0; a--)
	{
		cout << " ";
	}
}
int counter = 1;
void printnumbers()
{
	int r = counter;
	int t = 2;
	for (; r > 0; r--)
	{
		cout << r;
	}
	counter++;
	for (; t < counter; t++)
	{
		cout << t;
	}
}

int main()
{
	int input;
	cout << "enter number of lines";
	cin >> input;										//get input
	int tempnumber=input;								// copy to a temporary number bcos we need original input for spacing
	while (tempnumber > 0)
	{
		printspace(input);								//prints space equal to input
		printnumbers();									//prints the actual number
		tempnumber--;
		input--;
		cout << "\n";
	}
}
