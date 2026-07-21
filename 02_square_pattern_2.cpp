#include<iostream>
using namespace std;
int main(){

    int n = 5;

    for(int i=1; i<=n; i++){   // outer
        char ch = 'A';
        for(int j=1; j<=n; j++){  // inner
            cout << ch <<" ";
            ch = ch + 1; // char + int = ASCHII value + int = 65 + 1 = 66, which is B
        }
        cout<<endl;
    }
    
    return 0;
}