#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    while (1){
        int guessNumber, randomNumber;

        cout<<"Enter your guess number between 1 to 5 : "<<endl;

        cin>>guessNumber;

        randomNumber = rand() % 5 + 1;

        if(guessNumber == randomNumber){
        cout<<"Congratulations!! You have won."<<endl<<endl;
        }else{
        cout<<"Oh Noo!! Guess Number not matched. Please try again..."<<endl;
        cout<<"Random number was: "<<randomNumber<<endl<<endl;
        }
    }
    
    getch();
}