#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // positive-negative
    int num;
    cout<<"Enter your lucky number: ";

    cin>>num;

    if(num>0){
        cout<<"Your number is Positive"<<endl;
    }
    else if(num<0){
        cout<<"Your number is Negative"<<endl;
    }
    else{
        cout<<"Your number is Zero"<<endl;
    }

    getch();
}