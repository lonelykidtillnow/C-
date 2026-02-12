#include<bits/stdc++.h>
using namespace std;

int quicksort(int arr[],int start,int end){
    int i=start;
    int j=end;
    int pivot=arr[start];
    
    while(i<=j){
        while(arr[i]<=pivot && i<=j){
            i++;
        }
        while(arr[j]>=pivot && i<=j){
            j--;
        }
        if(i<=j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}

void pivot(int arr[],int start,int end){
    
    if(start<=end){
        int p=quicksort(arr,start,end);
        pivot(arr,start,p-1);
        pivot(arr,p+1,end);
    }
}
int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<=n-1;i++) cin>>arr[i];
    
    pivot(arr,0,n-1);
    
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<" ";
    return 0;
}


// Array:[4, 6, 2, 5, 7, 9, 1, 3]

// pivot(arr, 0, 7)

// 🔵 STEP 1 — Partition (0 to 7)
// i = 0
// j = 7
// Pivot = first element = 4

// 👉 Move i forward (arr[i] <= 4)
// 4 <= 4 ✔ → i=1
// 6 <= 4 ❌ stop
// i=1

// 👉 Move j backward (arr[j] >= 4)
// 3 >= 4 ❌ stop
// j=7

// 👉 Swap (i<=j)
// Swap arr[1] and arr[7]
// 6 ↔ 3

// Array becomes:
// [4, 3, 2, 5, 7, 9, 1, 6]

// 🔁 Next Iteration
// i=1
// j=7
// Pivot = first element = 4

// Move i
// 3 <= 4 ✔ → i=2
// 2 <= 4 ✔ → i=3
// 5 <= 4 ❌ stop
// i=3

// Move j
// 6 >= 4 ✔ → j=6
// 1 >= 4 ❌ stop
// j=6

// Swap
// Swap arr[3] and arr[6]
// 5 ↔ 1

// Array:[4, 3, 2, 1, 7, 9, 5, 6]

// 🔁 Next Iteration
// i=3
// j=6
// Pivot = first element = 4

// Move i
// 1 <= 4 ✔ → i=4
// 7 <= 4 ❌ stop
// i=4

// Move j
// 5 >= 4 ✔ → j=5
// 9 >= 4 ✔ → j=4
// 7 >= 4 ✔ → j=3
// Now i=4, j=3 → stop

// Final swap pivot with arr[j]
// Swap arr[0] and arr[3]
// 4 ↔ 1

// Array becomes:[1, 3, 2, 4, 7, 9, 5, 6]
// Pivot index = 3

// 🟢 Now Recursion
// Left side: (0 to 2)
// Right side: (4 to 7)

// 🔵 STEP 2 — Partition Left Side (0 to 2)
// Subarray:
// [1, 3, 2]
// Pivot = 1
// i=0
// j=2

// Move i:
// 1 <= 1 ✔ → i=1
// 3 <= 1 ❌ stop

// Move j:
// 2 >= 1 ✔ → j=1
// 3 >= 1 ✔ → j=0

// Now i=1, j=0 → stop

// Swap arr[0] and arr[0] (same)

// Array unchanged:[1, 3, 2, 4, 7, 9, 5, 6]


// Pivot index = 0
// Recursive:
// (0,-1) stop
// (1,2)

// 🔵 STEP 3 — Partition(1 to 2)
// Subarray:
// [3,2]
// Pivot = 3
// i=1
// j=2

// Move i:
// 3 <= 3 ✔ → i=2
// 2 <= 3 ✔ → i=3

// Move j:
// 2 >= 3 ❌ stop

// Now i=3, j=2 → stop

// Swap arr[1] and arr[2]
// 3 ↔ 2

// Array:[1, 2, 3, 4, 7, 9, 5, 6]

// Pivot index = 2
// (1,1) stop
// (3,2) stop
// Left side fully sorted ✔

// 🔵 STEP 4 — Right Side Partition (4 to 7)
// Subarray:
// [7, 9, 5, 6]
// Pivot = 7
// i=4
// j=7

// Move i:
// 7 <= 7 ✔ → i=5
// 9 <= 7 ❌ stop

// Move j:
// 6 >= 7 ❌ stop

// Swap arr[5] and arr[7]
// 9 ↔ 6

// Array:[1,2,3,4,7,6,5,9]


// Next iteration:
// Pivot = 7
// i=5
// j=7

// Move i:
// 6 <= 7 ✔ → i=6
// 5 <= 7 ✔ → i=7
// 9 <= 7 ❌ stop

// Move j:
// 9 >= 7 ✔ → j=6

// Now i=7, j=6 → stop

// Swap pivot with arr[6]
// 7 ↔ 5

// Array:[1,2,3,4,5,6,7,9]

// Pivot index = 6
// Recursive:
// (4,5)
// (7,7) stop

// 🔵 STEP 5 — Partition(4 to 5)
// Subarray:
// [5,6]
// Pivot = 5
// i=4
// j=5

// Move i:
// 5 <= 5 ✔ → i=5
// 6 <= 5 ❌ stop

// Move j:
// 6 >= 5 ✔ → j=4
// Stop

// Swap arr[4] and arr[4]
// Done.

// ✅ FINAL SORTED ARRAY
// 1 2 3 4 5 6 7 9