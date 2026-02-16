#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,count=0;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<=n-1;i++) cin>>arr[i]; //13,46,24,52,20,9
    
    int target=9;
    
    for(int i=0;i<=n-1;i++){
        if(target==arr[i]){
            count++;
            cout<<arr[i]<<" found at index "<<i;
            break;
        }
    }
    
    if(count==0)    cout<<"Element Not Found";
    
    return 0;
}