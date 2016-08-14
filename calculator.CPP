/*
@author: Yash Kumar Verma
@timestamp : 14.8.2016-20:04
@name : Basic Introduction to C++
*/

#include<iostream.h>
#include<conio.h>

void main(){
clrscr();

//declaring variables
int choice;
long double a,b;

// displaying the topbar
cout << "---------------------------------------------------";
cout << "\n Calculator v1.0";
cout << "\n --------------------------------------------------";

// displaying the available functions
cout << "\n We provide the following functions. Please choose yours.";
cout << "\n 1 \t Addition";
cout << "\n 2 \t Subtraction";
cout << "\n 3 \t Multiplication";
cout << "\n 4 \t Division";

cout << "\n\n --------------------------------------------------";
cout << "\n Please Enter your choice :- ";
cin >> choice;

//loading different functions as user wants
switch(choice) {
	case 1:
		cout << "Enter 2 values to be added : ";
		cin  >> a>> b;
		cout <<" "<<a<< " + "<<b<< " = " << a+b;
		break;
	case 2:
		cout << "Enter 2 values to be subtracted (a-b) : ";
		cin  >> a>> b;
		cout <<" "<<a<< " - "<<b<< " = " << a-b;
		break;
	case 3:
		cout << "Enter 2 values to be multiplied : ";
		cin  >> a>> b;
		cout <<" "<<a<< " x "<<b<< " = " << a*b;
		break;
	case 4:
		cout << "Enter 2 values to be divided : ";
		cin  >> a>> b;
		cout <<" "<<a<< " /  "<<b<< " = " << a/b;
		cout << "\n Remainder = " << (int) a% (int)b;
		break;
	default:
		cout << "please enter a valid value";
		break;
}

// All Good to Go !

getch();
}