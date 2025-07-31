#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    
    int fulllength=a*b;
    cout<<fulllength<<endl;
    
    for(int i=1;i<=fulllength;i++){
        if(i%a==0 && i%b==0){   //1.12%12=0 && 12%18=12 false  2.18%12=6 && 18%18=0 false  3.36%12=0 && 36%18=0 true
          cout<<"LCM is:"<<i;
          break;
        }  
    }
    
    return 0;
}