// size of variable
// Size of Int/variable is not always same, but depends upon compiler.
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    system("cls");
   
    int intVar;
    cout << "Int takes "<< sizeof(intVar) << endl;

    float floatVar;
    cout << "Float takes " << sizeof(floatVar) << endl;
    
    getch();
    return 1;
}