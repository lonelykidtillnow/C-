#include<bits/stdc++.h>
using namespace std;

int main(){
  
    string s;
    cin>>s;
    
    int len=s.size();
    
    map<char,int> m;
    for(int i=0;i<len;i++)  m[s[i]]+=1;
    
    unordered_map<char,int> um;
    for(int i=0;i<len;i++)  um[s[i]]+=1;
    
    cout<<"map:"<<endl;
    for(auto value:m) cout<<value.first<<"->"<<value.second<<endl;
    char a='r';
    cout<<m[a]<<endl;
    
    cout<<"unordered_map:"<<endl;
    for(auto value:um) cout<<value.first<<"->"<<value.second<<endl;
    char b='a';
    cout<<um[b];
    
    
    return 0;
} //mostly use unordered_map it have best time complexity compare to map
