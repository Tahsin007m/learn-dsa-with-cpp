#include<iostream>
using namespace std;
int main(){

    /*
    Ternary Statement (Conditional Operator)

    A ternary statement is a shorthand way of writing a simple
    if-else statement. It evaluates a condition and returns one
    of two values depending on whether the condition is true or false.

    Syntax:

    (condition) ? expression_if_true : expression_if_false;  */

    int number;
    cout<<"Enter a number: ";
    cin>>number;

    (number%2==0) ? cout<<"Even"<<endl : cout<<"Odd"<<endl; 

    return 0;
}