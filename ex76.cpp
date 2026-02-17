#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {10,20,30,40,50};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int start=0;
    int end=n-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<" ";
    
    return 0;
}


// 🧾 Dry run
// 10 20 30 40 50

// start=0 end=4
// swap 10 & 50 → 50 20 30 40 10

// start=1 end=3
// swap 20 & 40 → 50 40 30 20 10

// start=2 end=2 stop

// OUTPUT → 50 40 30 20 10