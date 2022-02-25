#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // even or odd number
    int num;
    cout<<"Enter your lucky number: ";

    cin>>num;

    if(num%2==0){
        cout<<"Your number is Even"<<endl;
    }
    else{
        cout<<"Your number is Odd"<<endl;
    }

    getch();
}