#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // pass or fail number
    int num;
    cout<<"Enter your mark: ";

    cin>>num;

    if(num >= 33){
        cout<<"you passed "<<endl;
    }
    else{
        cout<<"you failed "<<endl;
    }

    getch();
}