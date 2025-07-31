#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n;
  cin>>n;
  
  int sum=0;
  
  for(int i=1;i<n;i++){
    if(n%i==0){
      cout<<i;
      sum=sum+i;
    }
  }
  cout<<endl;
  
  if(n==sum) cout<<"Perfect Number";
  
  else if(n>sum) cout<<"Deficient Number";
  
  else cout<<"Abundant Number";
  return 0;
}

// Given a number, check whether it is an abundant or deficient or perfect number N number 6 ,
//find the factors and add it eg 6 = 1 , 2 , 3

// the given number and sum , if both are same = Perfect Number
// the given number lesser than sum = Abundant Number
// the given number greater than sum = Deficient Number