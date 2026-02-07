#include<bits/stdc++.h>
using namespace std;

int main(){
//1.Insert at First
    int arr[10]={10,20,30,40,50};
    int n=5;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=7;
    n++;    //6
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";  //7 10 20 30 40 50 
    cout<<endl;
    
//2. Insert at Last
    arr[n]=55;
    n++;    //7
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";  //7 10 20 30 40 50 55 
    cout<<endl;
    
//3. Insert at Positions
    int index=3;
    for(int i=n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=27;
    n++;    //8
    for(int i=0;i<n;i++)   cout<<arr[i]<<" ";   //7 10 20 27 30 40 50 55 
    
    return 0;
}