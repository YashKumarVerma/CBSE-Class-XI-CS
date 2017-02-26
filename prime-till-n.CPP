// print prime till n
#include<iostream>

using namespace std;

int main ()
{
	// clear the screen
	system("cls");

	// declare variable
	int a;

	// get input
	cout << "Enter a number" << endl;
	cin >> a;
	
	int i,j,f;
	for(int i=2; i<201; i++){
		f=0;
		for(int j=2; j<i; j++){
			if(i%j==0){
				f=1;
			}
		}
	if(f < 1){
		cout << i << endl;
	}
	}

}