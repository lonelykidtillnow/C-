#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //Upper Part
    for(int i=0;i<5;i++){
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
      for(int k=0;k<8-2*i;k++){
        cout<<" ";
      }
      for(int j=i+1;j>0;j--){
        cout<<"*";
      }
      cout<<endl;
    }
    
    //Lower Part
    for(int i=0;i<4;i++){
      for(int j=0;j<4-i;j++){
        cout<<"*";
      }
      for(int k=0;k<2*i+2;k++){
        cout<<" ";
      }
      for(int j=4-i;j>0;j--){
        cout<<"*";
      }
      cout<<endl;
    }
   
    return 0;
}


// Output:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *