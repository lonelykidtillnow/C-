#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a=0;
  
  for(int i=0;i<5;i++){
    if(i%2==0)  a=0;
    else        a=1;
    for(int j=0;j<i;j++){
      cout<<a;    
      a=1-a;      //toggle from 0 to 1    1.a=1-1=0 2.a=1-0=0
    }
    cout<<endl;
  }
  
  return 0;
}


// Output:
// 1
// 01
// 101
// 0101