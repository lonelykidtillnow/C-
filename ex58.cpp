#include<bits/stdc++.h>
using namespace std;

int main(){
  
    string s;
    cin>>s;
    
    int len=s.size();
    
    int hash[256]={0};
    
    for(int i=0;i<len;i++)  hash[s[i]]+=1;
    
    for(int i=0;i<256;i++){
      if(hash[i]>0) cout<<char(i)<<"->"<<hash[i]<<endl;
    }
    
    return 0;
}


//Input:
// rajeshrm

// Output:
// a->1
// e->1
// h->1
// j->1
// m->1
// r->2
// s->1