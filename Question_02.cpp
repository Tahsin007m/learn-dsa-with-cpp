#include<iostream>
using namespace std;
int main(){

    // Sum of Natural Numbers

    int n = 1;
    int limit;
    int sum = 0;
    cout<<"Enter the limit: ";
    cin>>limit;

    for(int i=1; i<=limit; i++){
        sum += i;
    }
    cout<<"The sum of numbers from "<<n<<" to "<<limit<<" is: "<<sum<<endl;

    return 0;
}