// print prime till n
#include<iostream>
#include<conio.h>
using namespace std;

// declare function
int quora(int a[6], int b);

// main function
int main ()
{
	system("cls");

	// variables declared
	int a[6];

	// get values
	cout << "Enter six numbers";
	for(int i=0; i<6; i++){
		cin >> a[i];
	}

	// call the function
	quora(a,6);

	getch();
}


// function is here
int quora(int a[6], int b){
	// declare 2d array
	int new_array[6][6] = {0};
	
	// manipulation
	for(int i=0; i<b; i++)
		for(int j=0; j<b-i; j++)
				new_array[i][j] = a[j];
		
	// display
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout << new_array[i][j] ;
		}
		cout << "\n";
	}	
}