#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<5;i++){
      char a='E'-i;
      for(int j=0;j<i+1;j++){
        cout<<a;
        a+=1;
      }
      cout<<endl;
    }
   
    return 0;
}


// Output:
// E
// DE
// CDE
// BCDE
// ABCDE