//Selection Sort - (Find Minimum & Swap)

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,count=0,minimum;
    cin>>n; //5
    
    int arr[n];
    for(int i=0;i<=n-1;i++)     cin>>arr[i];    // 7 1 3 2 4
    
    
    for(int i=0;i<=n-1;i++){
        minimum=i;  //min=0, min=1, min=2, min=3
        for(int j=i+1;j<=n-1;j++){    //j=1 j=2 j=3 j=4, j=2 j=3 j=4, j=3 j=4, j=4
            if(arr[minimum]>arr[j]){  //7>1 1>3 1>2 1>4, 7>3 3>2 2>4, 7>3 3>4, 7>4
                count++;
                minimum=j;           //min=1, min=3 min=2, min=3, min=4
            }
        }
        swap(arr[i],arr[minimum]); //1 7 3 2 4, 1 2 7 3 4, 1 2 3 7 4, 1 2 3 4 7
    }
    
    if(count==0)    cout<<"Already Sorted Array";
    else{
        for(int i=0;i<=n-1;i++)    cout<<arr[i]<<" ";
    }
    
    return 0;
}