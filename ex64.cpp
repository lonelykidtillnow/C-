#include<bits/stdc++.h>
using namespace std;

int quicksort(int arr[],int start,int end){
  
  int pivot=arr[start];
  int left=start;
  int right=end;
  
  while(left<=right){
    while(arr[left]<=pivot && left<=right)    left++;
    while(arr[right]>=pivot && left<=right)   right--;
    if(left<=right) swap(arr[left],arr[right]);
  }
  
  swap(arr[start],arr[right]);
  return right;
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
  for(int i=0;i<n;i++)  cin>>arr[i];

  pivot(arr,0,n-1);
  
  for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
}


// Step-by-Step Execution
// Initial Array: [13, 46, 24, 52, 20, 9]
// First Call: pivot(arr, 0, 5)
// Partitioning:

// pivot = arr[0] = 13

// left = 0, right = 5

// While Loop (left <= right):

// Step 1:

// left increments until arr[left] > 13 → left = 1 (46 > 13).

// right decrements until arr[right] < 13 → right = 5 (9 < 13).

// Swap arr[1] (46) and arr[5] (9) → [13, 9, 24, 52, 20, 46].

// Step 2:

// left = 2 (24 > 13), right = 4 (20 < 13? No, 20 >= 13 → right = 3 (52 >= 13 → right = 2 (24 >= 13 → right = 1 (9 < 13).

// Now left = 2, right = 1. Loop exits (left > right).

// Place Pivot:

// Swap arr[start=0] (13) with arr[right=1] (9) → [9, 13, 24, 52, 20, 46].

// Return right = 1 (pivot's final position).

// Recursive Calls:

// pivot(arr, 0, 0) (left subarray: [9]) → Base case (no action).

// pivot(arr, 2, 5) (right subarray: [24, 52, 20, 46]).

// Second Call: pivot(arr, 2, 5)
// Partitioning:

// pivot = arr[2] = 24

// left = 2, right = 5

// While Loop:

// Step 1:

// left increments to 3 (52 > 24).

// right decrements to 4 (20 < 24).

// Swap arr[3] (52) and arr[4] (20) → [..., 24, 20, 52, 46].

// Step 2:

// left = 4 (52 > 24), right = 3 (20 < 24).

// Loop exits (left > right).

// Place Pivot:

// Swap arr[start=2] (24) with arr[right=3] (20) → [..., 20, 24, 52, 46].

// Return right = 3.

// Recursive Calls:

// pivot(arr, 2, 2) (left subarray: [20]) → Base case.

// pivot(arr, 4, 5) (right subarray: [52, 46]).

// Third Call: pivot(arr, 4, 5)
// Partitioning:

// pivot = arr[4] = 52

// left = 4, right = 5

// While Loop:

// left increments to 5 (46 <= 52 → left = 6).

// right stays at 5 (52 >= 52 → right = 4).

// Loop exits (left > right).

// Place Pivot:

// Swap arr[start=4] (52) with arr[right=4] (52) (no change).

// Return right = 4.

// Recursive Calls:

// pivot(arr, 4, 3) (invalid, skipped).

// pivot(arr, 5, 5) (subarray: [46]) → Base case.

//Final Sorted Array: [9, 13, 20, 24, 46, 52]