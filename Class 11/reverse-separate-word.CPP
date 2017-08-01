#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main(){

char a[100], word[100];
cout << "\nEnter a sentence \n";
gets(a);

//int len = strlen(a);
strcat(a," ");

for(int i=0,k=0; a[i] != '\0'; i++){
	if(a[i] != ' '){
		word[k++] = a[i];
	}
	else
	{
		while(k>0)
		{
			cout << word[--k];
		}
		cout << a[i];
	}
}

getch();
}