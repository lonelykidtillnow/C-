#include<bits/stdc++.h>
using namespace std;

// Backtracing na recursion afer print

//1. Print 1 to N using backtracking 
void f(int a,int n=1){
  if(a==n){
    cout<<a<<endl;
    return;
  }
  f(a-1,n);         //Recursion
  cout<<a<<endl;    //Print
  
}
int main(){
  
  int n;
  cin>>n;
  f(n);
  
  return 0;
}


//2. Print N to 1 using backtracking
void f(int a,int n=1){
  
  if(a==n){
    cout<<n<<endl;
    return ;
  }
  f(a,n+1);
  cout<<n<<endl;
  
}
int main(){
  int n;
  cin>>n;
  f(n);
  
  return 0;
}