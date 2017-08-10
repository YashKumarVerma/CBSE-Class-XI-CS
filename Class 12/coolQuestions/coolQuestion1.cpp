// make all combinations using numbers 1,2,3

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    system("cls");

    cout << "Creating all combinations using 1,2 and 3" << endl;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            for(int k=1; k<=3; k++){
                cout << i << j << k << endl;
            }
        }
    }

    getch();
    return 1;
}