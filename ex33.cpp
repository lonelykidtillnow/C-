#include<bits/stdc++.h>
using namespace std;

int main(){
  //rows no.of.lines
  for(int i=0;i<5;i++){
    //space " "
    for(int k=0;k<5-i;k++){
      cout<<" ";
    }
    //print "*"
    for(int j=0;j<2*i+1;j++){
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