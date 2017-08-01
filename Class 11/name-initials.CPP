#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main( ){
system("cls");

char a[100];

cout << "Enter a name \t";
gets(a);


for (int i = 0; i < strlen(a); i++)
{
	if(i==0)
	{
		a[i] =toupper(a[i]);
		cout<<a[i];
	}

	if(a[i] == ' ')
	{
		char ch = toupper(a[i+1]);
		cout <<ch;
	}
}

getch();
return 0;
}