#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int n1,n2;
    cin>>n1>>n2;
    
    int maximum=max(n1,n2);
    cout<<"maximum is:"<<maximum<<endl;
    
    int minimum=min(n1,n2);
    cout<<"minimum is:"<<minimum;
    
    return 0;
}