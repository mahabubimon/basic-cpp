#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch;

    cout<<"Enter any character: ";

    cin>>ch;

    ch = towlower(ch);

    if(ch== 'a' || ch== 'e' ||ch== 'i' ||ch== 'o' ||ch== 'u'){
        cout<<ch<<" is a vowel.";
    }
    else{
        cout<<ch<<" is a consonant.";
    }

    getch();
}