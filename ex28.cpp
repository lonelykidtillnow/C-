#include<bits/stdc++.h>
using namespace std;

//void() haven't return, int() have return

// 1. void function without parameter
void add(){
  int n1,n2;
  cin>>n1>>n2;
  cout<<n1+n2;
}
int main(){
    add();

    return 0;
}

// 2. void function with parameter
void add(int a,int b){
  cout<<a+b;
}
int main(){
  int n1,n2;
  cin>>n1>>n2;
  add(n1,n2);

  return 0;
}

// 3.int function without parameter
int add(){
  int n1,n2;
  cin>>n1>>n2;
  return n1+n2;
}
int main(){
  int x=add();
  cout<<x;

  return 0;
}

//4. int function with parameter
int add(int a,int b){
  return a+b;
}
int main(){
  int n1,n2;
  cin>>n1>>n2;
  int x=add(n1,n2);
  cout<<x;
  
  return 0;
}