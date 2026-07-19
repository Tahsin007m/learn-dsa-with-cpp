#include<iostream>
using namespace std;
int main(){

    // multiplication table of a number upto 10

    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    
    for(int i=1; i<=10; i++){
        cout<<number<<" x "<<i<<" = "<<(number*i)<<endl;
    }

    return 0;
}