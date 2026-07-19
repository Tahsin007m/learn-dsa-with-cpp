#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks >= 80 && marks <= 100){
        cout<<"You got A grade!"<<endl;
    }
    else if(marks >= 60 && marks < 80){  //  multiple else if statements can be used to check multiple conditions
        cout<<"You got B grade!"<<endl;  //  just use else if to check multiple conditions, if the first condition is false, 
    }                                    //  it will check the next condition and so on
    else if(marks >= 40 && marks < 60){
        cout<<"You got C grade!"<<endl;
    }
    else if(marks >= 0 && marks < 40){
        cout<<"You got F grade!"<<endl;
    }
    else{
        cout<<"Invalid marks!"<<endl;
    }

    return 0;
}