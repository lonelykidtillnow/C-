#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<5;i++){
      char a='A'+i;
      for(int j=0;j<i+1;j++){
        cout<<a;
      }
      cout<<endl;
    }
   
    return 0;
}


// Output:
// A
// BB
// CCC
// DDDD
// EEEEE