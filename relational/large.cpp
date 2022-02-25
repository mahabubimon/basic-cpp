#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // large number
    int num1, num2;
    cout<<"Enter two numbers: ";

    cin>>num1>>num2;

    if(num1>num2){
        cout<<"Large Number is "<<num1<<endl;
    }
    else{
        cout<<"Large Number is "<<num2<<endl;
    }

    getch();
}