// Array Initialization Techniquies.
// Comment out one by one to see the impact.

#include<iostream.h>
#include<conio.h>

void main(){
clrscr();

// Doesn't run
int arr[2][] = {00,01,10,11,20,21};

// Doesn't run
int arr[][] = (00,01,10,11,20,21);

// Runs like charm
int arr[][2] = {00,01,10,11,20,21};



getch();
}