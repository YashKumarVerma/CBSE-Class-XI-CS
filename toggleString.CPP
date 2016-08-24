#include<iostream.h>
#include<conio.h>
#include<string.h>

void main(){
clrscr();

char a[100];

cin >> a;


for(int i=0; i < strlen(a) ; i++ )
{
	if(a[i] >= 'A' && a[i] <= 'Z' )
	{
		a[i] = char(a[i] + 32);
	}
	else
	{
		a[i] = char(a[i]-32);
	}
}
cout<< a;
getch();

}