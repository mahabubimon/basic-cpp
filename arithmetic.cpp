#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1, num2;
    num1 = 10; 
    num2= 7;

    int sum;
    sum = num1 + num2;
    cout << "Sum is: " << sum;
    cout <<endl;

    int sub;
    sub = num1 - num2;
    cout << "Substraction is: " << sub;
    cout <<endl;

    int mul;
    mul = num1 * num2;
    cout << "Multiplication is: " << mul;
    cout <<endl;

    double div;
    div= (float) num1 / num2; // type casting
    cout << "Division is: " << div;
    cout <<endl;

    int rem;
    rem = num1 % num2;
    cout << "Reminder is: " << rem;
    cout <<endl;
}