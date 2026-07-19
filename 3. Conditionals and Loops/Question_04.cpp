#include<iostream>
using namespace std;
int main(){

    // reverse a number

    int number;
    int reversed = 0;
    int remainder;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    int original = number;

    while(number!=0)
    {
        remainder = number % 10; // get the last digit
        reversed = reversed * 10 + remainder; // build the reverse number
        number /= 10; // remove the last digit
    }

    cout<<"Reversed number of "<<original<<" is "<<reversed<<endl;

    return 0;
}