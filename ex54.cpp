#include<bits/stdc++.h>
using namespace std;

//1. Contain Duplicate element in array using Two pointer
int main(){
  int n=4;
  
  int arr[n];
  for(int i=0;i<n;i++)  cin>>arr[i];
  
  int start=0,end=n-1;
  
  while(start<end){
    
    if(arr[start]==arr[end]){
      cout<<"true";
      return 0;
    }
    start++;
  }
  cout<<"false";
}
