#include<bits/stdc++.h>
using namespace std;

int main(){
//1.Delete at First
    int arr[10]={10,20,30,40,50};
    int n=5;
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;    //4
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";      //20 30 40 50
    cout<<endl;
    
//2. Delete at Last
    arr[n-1]=0;
    n--;    //3
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";      // 20 30 40
    cout<<endl;
    
//3. Delete at Positions
    int index=1;
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;    //2
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";       //20 40
    return 0;
}