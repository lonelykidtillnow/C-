#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    
    int hash[100]={0};
    
    for(int i=0;i<n;i++)  hash[arr[i]]+=1;
    
    for(int i=0;i<100;i++){
      if(hash[i]>0) cout<<i<<"->"<<hash[i]<<endl;
    }
    
    return 0;
}


//Input:
//6
//10 20 10  30 40 30

// Output:
// 10->2
// 20->1
// 30->2
// 40->1