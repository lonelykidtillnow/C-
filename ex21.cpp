#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n1,n2;
  cin>>n1>>n2;
  
  int sum1=0,sum2=0;
  
  for(int i=1;i<n1;i++){
    if(n1%i==0) sum1=sum1+i;
  }
  cout<<sum1<<endl;
  
  for(int i=1;i<n2;i++){
    if(n2%i==0) sum2=sum2+i;
  }
  cout<<sum2<<endl;
  
  if(n1==sum2 && n2==sum1) cout<<"Amicable Pair";
  else  cout<<"Not a Amicable Pair";
  return 0;
}

//Divisors of 220
//1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
//1+2+4+5+10+11+20+22+44+55+110=284

//Divisors of 284
//1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
//1+2+7+71+142=220

//220 = 220(divisors of 284) && 284 = 284(divisors of 220) = Amicable pair