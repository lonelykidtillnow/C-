#include<bits/stdc++.h>
using namespace std;

//1.Factorial using Recursive with Parameters & Argument
void factorial(int a,int b=1,int fact=1){
  if(a==b){
    fact=fact*b;
    cout<<fact;
    return;
  }
  fact*=b;
  factorial(a,b+1,fact);
  
}
int main(){
  
  int n;
  cin>>n;
  if(n==0){
    cout<<0;
    return 0;
  }
  else factorial(n);
  
}


//2.Factorial using Pure Functional Recursion
int factorial(int a){
  if(a==0){
    return 0;
  }
  if(a==1){
    return 1;
  }
  return a*factorial(a-1);
}
int main(){
  int n;
  cin>>n;
  int res=factorial(n);
  cout<<res;
  
  return 0;
}

//Comparison Table:

// Feature	                        Code 1	                                            Code 2
// Style	                        Parameter-based recursion (Accumulator)	            Pure functional recursion
// Output type	                    void (prints result)	                            int (returns result)
// Variables used	                a, b, fact	                                        a only
// Code length	                    Longer	                                            Shorter
// Clean & Mathematical	            ❌ Less	                                           ✅ More
// Good for step-by-step logic	    ✅ Yes	                                           ❌ No (just final result)