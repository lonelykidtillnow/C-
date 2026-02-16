#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,count=0;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<=n-1;i++) cin>>arr[i]; //2,5,8,12,16,23,38
    
    int target=16;
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        
        if(target==arr[mid]){
            count++;
            cout<<arr[mid]<<" Found Index at "<<mid;
            break;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
    if(count==0)    cout<<"Element Not Found";
    
    return 0;
}