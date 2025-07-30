#include<bits/stdc++.h>
using namespace std;

int main(){
  
    // for loop
    for(int i=0;i<=50;i+=5)  cout<<i<<" ";
    
    cout<<endl;
    
    //while loop
    int i=0;
    while(i<=50){
      cout<<i<<" ";
      i+=5;
    }
    
    cout<<endl;
    
    //do while loop
    int j=2;
    do{
      cout<<j<<" "; //2 4
      j+=2;         //4 6
    }while(j<=5);   //4<=5 true 6<=5 false exit
    
    return 0;
}