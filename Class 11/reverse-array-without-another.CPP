// print prime till n
#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
	// clear the screen
	system("cls");

	// declare variable
	int a[10];
	int x=0;

	// get input
	cout << "Enter a number" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	
	for(int i=0, x=0; i<5; i++){
		x 		= a[i];
		a[i] 	= a[9-i];
		a[9-i]  = x; 
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << endl;
	}

	getch();
}