// print prime till n
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main ()
{
	// clear the screen
	system("cls");

	int a[10];
	int x;

	for (int i = 0; i < 10; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i+=2)
	{
		x		=	a[i];
		a[i] 	= a[i+1];
		a[1+i]	= x; 
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << "\t";
	}

	getch();
}