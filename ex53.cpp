#include<bits/stdc++.h>
using namespace std;

//1. Reverse an array using Two pointer
int main(){
  int n;
  cin>>n;
  
  int arr[n];
  for(int i=0;i<n;i++)  cin>>arr[i];
  
  int start=0;
  int end=n-1;
  
  while(start<=end){
    swap(arr[start],arr[end]);
    start+=1,end-=1;
  }
  
  for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
  
  return 0;
}

//2. Reverse an array using Recursion
void reverse(int a[],int start,int end){
  if(start>=end){
    return;
  }
  swap(a[start],a[end]);
  reverse(a,start+1,end-1);
}
int main(){
  
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)  cin>>arr[i];
  reverse(arr,0,n-1);
  for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
  
  return 0;
}
