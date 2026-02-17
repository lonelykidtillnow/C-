#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {10,20,30,30,40,50};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    bool sorted=true;
    
    for(int i=0;i<=n-2;i++){
        if(arr[i]<=arr[i+1]){
            sorted=true;
        }
        else{
            sorted=false;
            break;
        }
    }
    
    if(sorted)  cout<<"Sorted Array";
    else        cout<<"Not Sorted Array";
    
    
    return 0;
}


// 🧾 Dry run
// 10 20 30 30 40 50

// i=0 → 10<=20 -> true
// i=1 → 20<=30 -> true
// i=2 → 30<=30 -> true
// i=3 → 30<=40 -> true
// i=4 → 40<=50 -> true
// Loop ends

// OUTPUT → Soted Array