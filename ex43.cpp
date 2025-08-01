#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<4;i++){
        //Space
      for(int k=0;k<3-i;k++){
        cout<<" ";
      }
      for(char j='A';j<'A'+i+1;j++){
        cout<<j;
      }
      for(char j='A'+i-1;j>='A';j--){
        cout<<j;
      }
      cout<<endl;
    }
   
    return 0;
}


// Output:
//    A
//   ABA
//  ABCBA
// ABCDCBA