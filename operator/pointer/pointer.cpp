#include<iostream>

using namespace std;

int main() {

    int a = 8;

    int* b = &a;

    cout<< "The value of a is "<<a<<endl;
    cout<< "The value of b is "<<*b<<endl;
    cout<< "The address of a is "<<&a<<endl;
    cout<< "The address of a is "<<b<<endl;

    return 0;
}