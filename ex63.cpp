#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr[],int start,int mid,int end){
  int left=start;
  int right=mid+1;
  vector<int> temp;
  
  while(left<=mid && right<=end){
    
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=end){
    temp.push_back(arr[right]);
    right++;
  }
  
  for(int i=0;i<temp.size();i++)  arr[i+start]=temp[i];
}

void divide(int arr[],int start,int end){
  if(start>=end){
    return;
  }
  
  int mid=(start+end)/2;
  divide(arr,start,mid);
  divide(arr,mid+1,end);
  
  mergesort(arr,start,mid,end);
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    
    divide(arr,0,n-1);  //0,5
    
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
    
    return 0;
}

// Original: [13, 46, 24, 52, 20, 9]
// Divide:
//   Left: [13, 46, 24] → [13, 46], [24] → [13], [46]
//   Right: [52, 20, 9] → [52, 20], [9] → [52], [20]
// Merge:
//   Left Merges:
//     [13] + [46] → [13, 46]
//     [13, 46] + [24] → [13, 24, 46]
//   Right Merges:
//     [52] + [20] → [20, 52]
//     [20, 52] + [9] → [9, 20, 52]
//   Final Merge:
//     [13, 24, 46] + [9, 20, 52] → [9, 13, 20, 24, 46, 52]