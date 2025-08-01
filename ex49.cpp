#include<bits/stdc++.h>
using namespace std;

// Recursion - 1.when function call itself , 2.until a specific condition to meet

// 1.print 1 to n using recursion
void f(int n){
  
  if(n==10){
    cout<<n;
    return;
  }
  cout<<n<<endl;
  f(n+1);
}

int main(){
    
    int n;
    cin>>n;
    f(n);
   
    return 0;
}

// 2.print Name to n using recursion
void f(int a,string b,int c=1){
  
  if(a==c){
    cout<<b;
    return;
  }
  cout<<b<<endl;
  f(a,b,c+1);
}
int main(){
  
  int n;
  string s;
  cin>>n>>s;
  
  f(n,s);
  
  return 0;
}