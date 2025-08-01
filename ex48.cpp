#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<7;i++){
      for(int j=0;j<7;j++){
        
        int top=i;
        int bottom=6-i;
        int left=j;
        int right=6-j;
        
        int mininum_distance=min(min(top,bottom),min(left,right));
        cout<<4-mininum_distance;
      }
      cout<<endl;
    }
   
    return 0;
}



// Output:
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444