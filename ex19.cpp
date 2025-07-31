#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n;
  cin>>n;
  
  int power=0;
  
  for(int i=0;i<n;i++){
    
    power=powl(2,i);    //2^0=1  2^1=2  2^2=4  2^3=8
    
    if(power==n){       //1==8   2==8   4==8   8==8
      cout<<"Yes";
      return 0;
    }
  }
  
  cout<<"No";
}

// Sample Input
// 8
// Sample Output
// Yes

// Sample Input
// 12
// Sample Output
// No

// Sample Input
// 1
// Sample Output
// Yes