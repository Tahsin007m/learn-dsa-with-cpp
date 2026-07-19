#include<iostream>
using namespace std;
int main(){

  // When one or more loops are placed inside another loop,
  // it is called a nasted loop.

  // similarly, we can also create nested if-else statements.

  // Let's create a pattern using nested loops.

  for(int i = 0; i <5 ; i++){     // Controls the number of rows.
    for(int j = 0; j < 5; j++){  //  Controls the number of columns.
      cout<<"*";                // Prints one '*' in each column.
    } 
    cout<<endl;                  // Moves to the next row.
  }
  
  return 0;
}
