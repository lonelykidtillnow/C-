#include<bits/stdc++.h>
using namespace std;

int main(){
  
  for(int i=0;i<5;i++){
    //space " "
    for(int k=0;k<i;k++){
      cout<<" ";
    }
    //print "*"
    for(int j=0;j<9-2*i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}


// Output:
// *********
//  *******
//   *****
//    ***
//     *