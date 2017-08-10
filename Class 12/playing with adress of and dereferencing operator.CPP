//playing with dereferencing and address of operator.

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int a = 100;
int *p;

cout << &a    << endl;   // Address
cout << &(a)  <<  endl;  // Address
cout << *(&a) << endl;   // 100
cout << *(&a) * *(&a) << endl;   // 100*100 = 1000;

p=&a;
// normal variable cannot store address location
// uncommenting this would create errors;
//int c = &a;

cout << *p << endl; // Value of variable whose location stored  : 100
cout << &p <<endl ; // Locaiton of pointer and not of variable  : other adress
cout << *(&p) << endl;  // Address of A


getch();
}