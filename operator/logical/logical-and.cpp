#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, num3, large;

    cout << "Enter three numbers: "<<endl;

    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        large = num1;
    }
    else if(num2>num1 && num2>num3){
        large = num2;
    }
    else{
        large = num3;
    }

    cout<<"Large number is "<<large;

    getch();
}