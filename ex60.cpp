#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    
    //map hashing
    map<int,int> m;
    for(int i=0;i<n;i++)  m[arr[i]]+=1;
    
    cout<<"map:"<<endl;
    for(auto value:m){
      cout<<value.first<<"->"<<value.second<<endl;
    }
    
    int x=10;
    cout<<m[x]<<endl;
    
    
    //unordered_map hashing
    unordered_map <int,int> um;
    for(int i=0;i<n;i++)  um[arr[i]]+=1;
    
    cout<<"unordered_map:"<<endl;
    for(auto value:um){
      cout<<value.first<<"->"<<value.second<<endl;
    }
    
    int y=40;
    cout<<um[y];
    
    return 0;
} //mostly use unordered_map it have best time complexity compare to map
