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

	char s1[100];
	char x;

	cout << "Enter a string";
	gets(s1);

	for(int i=0; i<strlen(s1)/2 ; i++){
		x = s1[i];
		s1[i] = s1[strlen(s1)-1-i];
		s1[strlen(s1)-1-i] = x;
	}

	cout << "\n " << s1 ;

	getch();
}