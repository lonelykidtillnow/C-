#include<bits/stdc++.h>
using namespace std;
int main(){
  
  string a;
  cin>>a;
  
  int len=a.size();
  
  cout<<len<<endl;
  
  int counta=0,countb=0;
  
  for(int i=0;i<len;i++){
    if(a[i]=='*')  counta++;
    if(a[i]=='#')  countb++;
  }
  cout<<counta<<" "<<countb<<endl;
  
  cout<<counta-countb;
  
  return 0;
}

// Sample Input 0:
// ####***
// Count of '*': 3
// Count of '#': 4
// Difference = 3 - 4 = -1
// 🟢 Output: -1


// Sample Input 1:
// ***##**
// Count of '*': 5
// Count of '#': 2
// Difference = 5 - 2 = 3
// 🟢 Output: 3