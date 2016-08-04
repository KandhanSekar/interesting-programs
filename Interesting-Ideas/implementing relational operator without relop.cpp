//Tried implementing greater than operator using math logic
#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter the two numbers";
	cin >> a >> b;
	cout << "the greater of the numbers is ";
	cout << ((sqrt(a*a + b*b - 2 * a*b) + (a + b)) / 2);
    return 0;
}

