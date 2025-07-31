#include<bits/stdc++.h>
using namespace std;

// 1.pass by value - takes duplicate value
int add(int a){
  a+=10;
  return a;
}
int main(){
  int n1;
  cin>>n1;
  int x=add(n1);
  cout<<n1<<" "<<x;
  
  return 0;
}

// 2.pass by reference(&) - takes original value
int add(int &a){
  a+=10;
  return a;
}
int main(){
  int n;
  cin>>n;
  int x=add(n);
  cout<<n<<" "<<x;
  
  return 0;
}