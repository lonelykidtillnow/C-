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


#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int center,int end){
    //Two Pointer Approach
    int left=start;         //left=0  {13 24 46 52}
    int right=center+1;     //right=4 {9 17 20}
    vector<int> temp;
    //Merging Left side & Right side of the array
    while(left<=center && right<=end){
        if(arr[left]<=arr[right]){      //13<9F, 13<17T, 24<17F, 24<20F
            temp.push_back(arr[left]);  //temp[13]
            left++;                     //left=1
        }
        else{
            temp.push_back(arr[right]); //temp[9],temp[17],temp[20]
            right++;                    //right=5,right=6, right=7
        }
    }
    //If Right Side is Over
    while(left<=center){    //left=1
        temp.push_back(arr[left]);  //temp[24],temp=[46],temp=[52]
        left++;                     //left=2,  left=3,   left=4
    }
    //If left Side is Over
    while(right<=end){
        temp.push_back(arr[right]);
        right++;
    }
    //Copy back to Original array   //temp=[9,13,17,20,24,46,52]
    for(int i=start;i<=end;i++){
        arr[i]=temp[i-start];
    }
}

void divide(int arr[],int start,int end){
    //Recursion Approach
    if(start>=end)  return; //Base Condition
    
    else{
        int center=(start+end)/2;   //(0+6)/2=3
        //Recursion going
        divide(arr,start,center);    //leftside = (arr,0,3)
        divide(arr,center+1,end);    //Rightside = (arr,4,6)
        merge(arr,start,center,end); //merge(arr,0,3,6)
    }
}

int main(){
    int n;
    cin>>n; //7
    
    int arr[n];
    for(int i=0;i<=n-1;i++) cin>>arr[i];    //13 46 24 52 20 9 17
    
    divide(arr,0,n-1);  //divide(arr,0,6)
    
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<" ";  //9 13 17 20 24 46 52
    
    return 0;
}