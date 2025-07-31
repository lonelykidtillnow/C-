#include<bits/stdc++.h>
using namespace std;

int main(){
  
  //Upper Part
  for(int i=0;i<5;i++){
    for(int k=0;k<5-i;k++){
      cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  //Lower Part
  for(int i=0;i<5;i++){
    for(int k=0;k<i;k++){
      cout<<" ";
    }
    for(int j=0;j<9-2*i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}


// Output:
//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *