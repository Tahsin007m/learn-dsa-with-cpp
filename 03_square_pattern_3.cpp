#include<iostream>
using namespace std;
int main(){

    int n = 3;
    int number = 1;

    for(int i=0; i<n; i++){ 
        // if we declare number = 1 here, then it will reset after every line
        for(int j=0; j<n; j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }

    cout<<"Number after our pattern: "<<number<<endl;

    return 0;
}