#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int temp=n;
    
    int rem=0,arm=0;
    
    while(n>0){     //153>0  15>0  1>0  0.1>0 false
      rem=n%10;     //3  5 1
      arm=rem*rem*rem+arm;  //3*3*3+0=27   5*5*5+27=152  1*1*1+152=153
      n=n/10;       //153/10=15   15/10 1/10
    }
    cout<<arm<<endl;
    
    if(temp==arm) cout<<"Armstrong number";
    else  cout<<"Not Armstrong number";
    
    return 0;
}