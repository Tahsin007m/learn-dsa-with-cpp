#include<iostream>
using namespace std;
int main(){

    // check if a character is uppercase or lowercase

    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<ch<<" is a lowercase character!"<<endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<ch<<" is an uppercase character!"<<endl;
    }
    else{
        cout<<ch<<" is not an alphabetic character!"<<endl;
    }

    return 0;
}