#include<bits/stdc++.h>
using namespace std;

//1.Sum of first N using Recursive with Parameters & Argument
void sum(int a,int b=1,int add=0){
  
  if(a==b){
    add=add+b;
    cout<<add;
    return;
  }
  add=add+b;
  sum(a,b+1,add);
}
int main(){
  int n;
  cin>>n;
  sum(n);
  
  return 0;
}


//2.Sum of first N using Pure Functional Recursion
int sum(int a){
  
  if(a==1){
    return 1;
  }
  return a+sum(a-1);
}
int main(){
  int n;
  cin>>n;
  int res=sum(n);
  cout<<res;
  
  return 0;
}
