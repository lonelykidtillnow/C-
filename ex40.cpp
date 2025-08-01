#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<5;i++){
      for(char j='A';j<'A'+i+1;j++){
        cout<<j;
      }
      cout<<endl;
    }
   
    return 0;
}


// Output:
// A
// AB
// ABC
// ABCD
// ABCDE