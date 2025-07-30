#include<bits/stdc++.h>
using namespace std;

int main(){
  
    string a="Rajesh";
    cout<<a[1]<<endl;   //a
    
    //length
    int len=a.size();
    cout<<len<<endl;
    
    //changing character
    a[2]='k';
    cout<<a<<endl;
    
    //lowercase
    string lowercase=a;
    for(int i=0;i<len;i++){
      lowercase[i]=tolower(lowercase[i]);
    }
    
    //uppercase
    string uppercase=a;
    for(int i=0;i<len;i++){
      uppercase[i]=toupper(uppercase[i]);
    }
    
    //captial
    string captial=a;
    toupper(captial[0]);
    
    cout<<uppercase<<" "<<lowercase<<" "<<captial;
    return 0;
}