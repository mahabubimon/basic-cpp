#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    for(int i=1; i<=20; i++){

        if(i==10) continue;

        if(i>15) break;

        cout<<i<<" Bangladesh"<<endl;
    }

    cout<<"for loop end.";

    getch();
};
