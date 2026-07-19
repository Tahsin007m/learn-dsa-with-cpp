#include<iostream>
using namespace std;
int main(){

    // do while loop
    // lets print numbers from 1 to 10 using do while loop

    int i = 1; // start with 1

    do{
        cout<<i<<endl;  // print the value of i
        i++;  // increase the value of i by 1
    }while( i <= 10 );  // condition check
    

    return 0;
}