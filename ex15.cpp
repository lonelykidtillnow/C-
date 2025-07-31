#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int a,b,c;
  cin>>a>>b>>c;
  
  if(a==b && a==c && b==c) cout<<"Equilateral";
  
  else if(a==b || a==c || b==c) cout<<"Isosceles";
  
  else  cout<<"Scalene";
  
  return 0;
}

//If all number are same - Equilateral
//If any two numbers are same - Isosceles
//If all the numbers are different - Scalene
