#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    int days=a%7;
    cout<<days<<endl;
    
    switch(days){
      case 1:{
        cout<<"monday";
        break;
      }
      case 2:{
        cout<<"tuesday";
        break;
      }
      case 3:{
        cout<<"wednesday";
        break;
      }
      case 4:{
        cout<<"thursday";
        break;
      }
      case 5:{
        cout<<"friday";
        break;
      }
      case 6:{
        cout<<"saturday";
        break;
      }
      default:{
        cout<<"sunday";
      }
    }
    return 0;
}