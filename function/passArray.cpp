#include<iostream>
#include<conio.h>
using namespace std;

void displayArray(int num[], int arraySize){
    for(int i=0; i<arraySize; i++){
        cout<<num[i]<<endl;
    }

}

int main() {
    int number[5]={1,2,3,4,5};
    displayArray(number, 5);

    getch();
}