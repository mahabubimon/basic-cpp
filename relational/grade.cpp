#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int mark;

    cout<< "Enter your mark: ";

    cin>>mark;
    
    if(mark>100){
        cout<<"Invalid mark.";
    }
    else if(mark<0){
        cout<<"Invalid mark.";
    }
    else if(mark>=80){
        cout<<"you have got A+";
    }
    else if(mark>=70){
        cout<<"you have got A";
    }
    else if(mark>=60){
        cout<<"you have got A-";
    }
    else if(mark>=50){
        cout<<"you have got B";
    }
    else if(mark>=40){
        cout<<"you have got C";
    }
    else if(mark>=33){
        cout<<"you have got D";
    }
    else{
        cout<<"you have got F";
    }

    getch();
}