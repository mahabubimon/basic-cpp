#include<iostream>
#include<cstdio>

using namespace std;

int main() {

    for(int ascii = 0; ascii<256; ascii++){
        // printf("ASCII %d = %c\n", ascii, ascii);

        cout<<"ASCII "<<ascii<<" = "<< char(ascii);
    }


    return 0;
}