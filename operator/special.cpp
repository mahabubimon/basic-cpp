#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    // comma(,)
    // pointer(*)
    // sizeof()

    // sizeof operator

    int a;
    float f;
    double d;
    char ch;
    char name[20];

    // int c = sizeof(a);
    // int c = sizeof(f);
    // int c = sizeof(d);
    // int c = sizeof(ch);
    int c = sizeof(name);
    cout<<c<<endl; 

    // comma(,) operator

    int x,y,sum;
    sum=(x=10, y=8, sum=x-y);

    cout<< sum;

    getch();
}