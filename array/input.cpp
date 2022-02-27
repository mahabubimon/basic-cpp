#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int marks[5];

    for(int i=0; i<=4; i++){
        cout << "Marks for student " << i+1 <<" = ";
        
        cin>>marks[i];
    }

    
    cout<<"marks[]= {";

    for(int i=0; i<=4; i++){
        cout << marks[i];
        if(i<4) cout<< ", ";
    }

    cout<<"}";

    getch();
}