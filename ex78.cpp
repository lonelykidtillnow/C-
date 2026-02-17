#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {1,4,0,2,0,0,3};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
    return 0;
}


// 🧾 Dry run
// 1 4 0 2 0 0 3
// pos=0

// i=0,pos=0   1 -> swap(1,1) -> 1 4 0 2 0 0 3
// i=1,pos=1   4 -> swap(4,4) -> 1 4 0 2 0 0 3
// i=2,pos=2   0 false
// i=3,pos=2   2 -> swap(2,0) -> 1 4 2 0 0 0 3
// i=4,pos=3   0 false
// i=5,pos=3   0 false
// i=6,pos=3   3 -> swap(3,0) -> 1 4 2 3 0 0 0
// Loop ends

// OUTPUT → 1 4 2 3 0 0 0