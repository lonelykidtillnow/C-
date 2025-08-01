#include<bits/stdc++.h>
using namespace std;


int main(){
  
  string a;
  cin>>a;
  
  int len=a.size();
  cout<<len<<endl;
  
  int start=0,end=len-1;
  
  while(start<end){
    if(a[start]==a[end]){
      start++;
      end--;
    }
    else{
      cout<<"not palindrome";
      return 0;
    }
  }
  cout<<"palindrome";
  
}
