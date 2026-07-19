#include<iostream>
using namespace std;
int main(){

    int number;
    cout<<"Enter a number: ";
    cin>>number;

    if( number%2==0 ){
        cout<<number<<" is an even number!"<<endl;
    }
    else{
        cout<<number<<" is an odd number!"<<endl;
    }

     /*
        Conditional Statement (if-else)

        A conditional statement is used to make decisions in a program.
        It checks whether a condition is true or false and executes
        different blocks of code based on the result.

        Syntax:

        if (condition) {
            // Code executes if the condition is true
        }
        else {
            // Code executes if the condition is false
        }
    */

    return 0;
}