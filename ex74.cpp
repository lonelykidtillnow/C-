#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {10,30,40,20};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int largest=arr[0];
    
    for(int i=1;i<=n-1;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<largest;
    
    return 0;
}

// 🧾 Dry run

// largest = 10

// i=1 → 30>10 → largest=30
// i=2 → 40>30 → largest=40
// i=3 → 20>40 → no change

// OUTPUT → 40