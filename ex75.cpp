#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {10,50,100,100,80};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int largest=arr[0];
    int second_largest=0;
    
    for(int i=1;i<=n-1;i++){
        if(largest<arr[i]){
            second_largest=largest;
            largest=arr[i];
        }
        else if(second_largest<arr[i] && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<largest<<" "<<second_largest;
    
    return 0;
}

// 🧾 Dry run

// largest=10 second=-∞

// i=1 → 10<50  → second=10 largest=50
// i=2 → 50<100 → second=50 largest=100
// i=3 → 100<80 → no change
// else if (50<80 && 80!=100) → second=80

// OUTPUT → 100 80