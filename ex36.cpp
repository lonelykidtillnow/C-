#include<bits/stdc++.h>
using namespace std;

int main(){
  
  //Upper Part
  for(int i=0;i<5;i++){
    for(int j=0;j<i+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  //Lower Part
  for(int i=0;i<4;i++){
    for(int j=0;j<4-i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}


// Output:
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *