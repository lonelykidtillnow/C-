#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int k=2;
    
    reverse(arr+0,arr+n);
    reverse(arr+0,arr+k);
    reverse(arr+k,arr+n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
    return 0;
}

// 🧾 Dry run

// Start → 1 2 3 4 5
// k=2

// reverse(start_index, end_index-1) -> reverse(arr+2,arr+5-1) -> reverse(2,4)

// reverse(arr+0,arr+5) -> reverse all → 5 4 3 2 1
// reverse(arr+0,arr+k) -> reverse first 2 → 4 5 3 2 1
// reverse(arr+2,arr+5) -> reverse last 3 → 4 5 1 2 3

// OUTPUT → 4 5 1 2 3