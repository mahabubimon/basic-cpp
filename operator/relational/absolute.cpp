#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter any integer: ";

    cin>>num;

    if(num < 0){
        cout<<"your absolute number: "<<(-num)<<endl;
    }
    else{
        cout<<"your absolute number: "<<(num)<<endl;
    }

    getch();
}