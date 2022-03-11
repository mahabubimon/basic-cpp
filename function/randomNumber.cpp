#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main() {

    for(int i = 1; i<10; i++) {
        int randomNumber = rand() % 100 + 1;
        cout<<randomNumber<<endl;
    }


    getch();
}