//Insertion Sort - (Pick an element & place it in correct position) 

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n; //5
    
    int arr[n];
    for(int i=0;i<=n-1;i++) cin>>arr[i];    // 13 46 24 52 20 9
    
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<" ";
    return 0;
}


// n = 6
// arr = [13, 46, 24, 52, 20, 9]

//  j = 0
//  while(j > 0)? ❌ (false)
//  [13, 46, 24, 52, 20, 9]

//  j = 1
//  arr[j-1] > arr[j] ?
//  arr[0] > arr[1] → 13 > 46 ❌
//  [13, 46, 24, 52, 20, 9]

//  j = 2
//  arr[1] > arr[2] ?
//  46 > 24 ✅
//  [13, 24, 46, 52, 20, 9]
//  j-- → j = 1
//  arr[0] > arr[1] ?
//  13 > 24 ❌

//  j = 3
//  arr[2] > arr[3] ?
//  46 > 52 ❌
//  [13, 24, 46, 52, 20, 9]

//  j = 4
//  arr[3] > arr[4] ?
//  52 > 20 ✅ → swap
//  [13, 24, 46, 20, 52, 9]
//  j = 3
//  arr[2] > arr[3] ?
//  46 > 20 ✅ → swap
//  [13, 24, 20, 46, 52, 9]
//  j = 2
//  arr[1] > arr[2] ?
//  24 > 20 ✅ → swap
//  [13, 20, 24, 46, 52, 9]
//  j = 1
//  arr[0] > arr[1] ?
//  13 > 20 ❌

//  j = 5
//  arr[4] > arr[5] ?
//  52 > 9 ✅ → swap
//  [13, 20, 24, 46, 9, 52]
//  46 > 9 → swap
//  24 > 9 → swap
//  20 > 9 → swap
//  13 > 9 → swap
//  [9, 13, 20, 24, 46, 52]