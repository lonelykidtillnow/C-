#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<5;i++){
      for(char j='A';j<'A'+5-i;j++){
        cout<<j;
      }
      cout<<endl;
    }
   
    return 0;
}


// Output:
// ABCDE
// ABCD
// ABC
// AB
// A