#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n;
  cin>>n;
  
  int temp=n;
  
  int rem=0,rev=0;
  
  while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
  cout<<temp<<" "<<rev<<endl;
  
  if(temp==rev) cout<<"palindrome";
  else    cout<<"not a palindrome";
  
  return 0;
}