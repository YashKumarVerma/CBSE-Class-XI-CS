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

	char a[1000];
	
	cout << "Enter a string";
	gets(a);

	for (int i = 0; i < strlen(a); i++)
	{
		if(isupper(a[i])){
			a[i] = tolower(a[i]);
		}
		else if(islower(a[i])){
			a[i] = toupper(a[i]);
		}
	}

	cout << "\n" << a;

	getch();
}