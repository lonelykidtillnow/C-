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
  cout<<n1<<" "<<x;     //5 15
  
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
  cout<<n<<" "<<x;      //15 15
  
  return 0;
}

//3. array - pass by value not work, default it takes pass by reference
int add(int arr[]){
  arr[0]+=90;
  return arr[0];
}
int main(){
  
  int arr[4]={10,20,30,40};
  int x=add(arr);
  cout<<arr[0]<<" "<<x;     //100 100
  
  return 0;
}

// 4. string - pass by value, pass by reference both works