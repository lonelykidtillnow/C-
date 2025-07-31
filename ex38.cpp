#include<bits/stdc++.h>
using namespace std;

int main(){
  
  for(int i=0;i<4;i++){
    //Left Side
    for(int j=0;j<i+1;j++){
      cout<<j+1;
    }
    //Space
    for(int k=0;k<6-2*i;k++){
      cout<<" ";
    }
    //Right Side
    for(int j=i+1;j>0;j--){
      cout<<j;
    }
    cout<<endl;
  }
  
  return 0;
}


// Output:
// 1      1
// 12    21
// 123  321
// 12344321