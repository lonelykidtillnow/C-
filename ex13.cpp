#include<bits/stdc++.h>
using namespace std;

int main() {
    int d,m,y;
    cin>>d>>m>>y;
    if(y<=9999 && y>=1000){
      if(d<=31 && d>=1 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)) cout<<"valid";
      
      else if(d<=30 && d>=1 && (m==4 || m==6 || m==9 || m==11))  cout<<"valid";
      
      else if(d<=28 && d>=1 && m==2) cout<<"valid";
      
      else if(d<=29 && d>=1 && m==2 && (y%4==0 && y%100!=0 || y%400==0)) cout<<"valid";
      
      else cout<<"invalid";
    }
    else  cout<<"invalid";
}