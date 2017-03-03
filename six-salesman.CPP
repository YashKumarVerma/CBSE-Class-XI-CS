#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main( ){
system("cls");

int a[6][6];

for (int i = 0; i < 6; i++)
{
	cout << "\n Salesman number " << i+1 << " : ";
	for (int j = 0; j < 6; j++)
	{
		cout << "\n Items sold on day " << j+1 << " : ";
		cin >> a[i][j];
	}
}

for (int i = 0, sum=0; i < 6; i++,sum=0)
{
	for (int j = 0; j < 6; j++)
	{
		sum += a[i][j];
	}
	cout << "\n Average sales for salesman number " << i+1 << " is "  << sum/6;
}

getch();
return 0;
}