#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n-1;j++){
        
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
      }
    }
    
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
    
    return 0;
}

// Input:
// 6
// 13 46 24 52 20 9
// Iteration 1 (i = 0):
// j = 0: Compare arr[0] (13) and arr[1] (46)

// 13 > 46 → No swap.
// Array: [13, 46, 24, 52, 20, 9]

// j = 1: Compare arr[1] (46) and arr[2] (24)
// 46 > 24 → Swap!
// Array: [13, 24, 46, 52, 20, 9]

// j = 2: Compare arr[2] (46) and arr[3] (52)
// 46 < 52 → No swap.
// Array: [13, 24, 46, 52, 20, 9]

// j = 3: Compare arr[3] (52) and arr[4] (20)
// 52 > 20 → Swap!
// Array: [13, 24, 46, 20, 52, 9]

// j = 4: Compare arr[4] (52) and arr[5] (9)
// 52 > 9 → Swap!
// Array: [13, 24, 46, 20, 9, 52]
// (Largest element 52 bubbles to the end)
//------------------------------------------

// Iteration 2 (i = 1):
// j = 0: 13 < 24 → No swap.

// j = 1: 24 < 46 → No swap.

// j = 2: 46 > 20 → Swap!
// Array: [13, 24, 20, 46, 9, 52]

// j = 3: 46 > 9 → Swap!
// Array: [13, 24, 20, 9, 46, 52]

// j = 4: 46 < 52 → No swap.
//------------------------------------------

// Iteration 3 (i = 2):
// j = 0: 13 < 24 → No swap.

// j = 1: 24 > 20 → Swap!
// Array: [13, 20, 24, 9, 46, 52]

// j = 2: 24 > 9 → Swap!
// Array: [13, 20, 9, 24, 46, 52]

// j = 3: 24 < 46 → No swap.

// j = 4: 46 < 52 → No swap.
//------------------------------------------

// Iteration 4 (i = 3):
// j = 0: 13 < 20 → No swap.

// j = 1: 20 > 9 → Swap!
// Array: [13, 9, 20, 24, 46, 52]

// j = 2: 20 < 24 → No swap.

// j = 3: 24 < 46 → No swap.

// j = 4: 46 < 52 → No swap.
//------------------------------------------

// Iteration 5 (i = 4):
// j = 0: 13 > 9 → Swap!
// Array: [9, 13, 20, 24, 46, 52]

// j = 1: 13 < 20 → No swap.

// j = 2: 20 < 24 → No swap.

// j = 3: 24 < 46 → No swap.

// j = 4: 46 < 52 → No swap.
//------------------------------------------

// Iteration 6 (i = 5):
// All elements are now sorted. No swaps occur.