// Multiply a number by 2 without using *
#include<iostream>

using namespace std;

int main ()
{
	// clear the screen
	system("cls");

	// declare variable
	int a;

	// get input
	cout << "Enter a number" << endl;
	cin >> a;
	a = a<<1;
	cout << "When number is multiplied by 2, it becomes " <<  a;  
}