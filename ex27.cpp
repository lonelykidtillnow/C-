#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    
    while(a!=0 && b!=0){ //1.a=12,b=64 true 2.a=12,b=4 true  3.a=0,b=4 false
      if(a<b){ //1.12<64 true  2.12<4 false 
        b=b%a;  //b=64%12=4
      }
      else{
        a=a%b; //a=12%4=0
      }
    }
    
    if(a==0) cout<<b;
    else      cout<<a;
    return 0;
}