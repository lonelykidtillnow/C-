#include<bits/stdc++.h>
using namespace std;

//1. Fibonacci Series using Pure Functional Recursion
int fibo(int a){
  if(a==0) return 0;
  if(a==1) return 1;
  
  return fibo(a-1)+fibo(a-2);
}
int main(){
  
  int n;
  cin>>n;
  
  int res=fibo(n);
  cout<<res;
  
  return 0;
}
