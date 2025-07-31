#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n;
  cin>>n;
  
  int square=n*n;
  
  int reverse_n=0;
  int reverse_square=0;
  
  int rem=0;
  
  int temp_n=n;
  int temp_square=square;
  
  //Reversing Number
  while(n>0){ // 12>0true 1>0true 0.1>0false
    rem=n%10;   // 12%10=2  1%10=1
    reverse_n=reverse_n*10+rem;   // 0*10+2=0+2=2  2*10+1=21
    n=n/10;   // 12/10=1  1/10=0.1
  }
  cout<<temp_n<<" "<<reverse_n<<endl;
  
  reverse_square=reverse_n*reverse_n;
  cout<<square<<" "<<reverse_square<<endl;
  
  int temp_rev_square=0;
  //Reversing reverse Square Number
  while(reverse_square>0){
    rem=reverse_square%10;
    temp_rev_square=temp_rev_square*10+rem;
    reverse_square=reverse_square/10;
  }
  cout<<square<<" "<<temp_rev_square<<endl;
  
  if(temp_square==temp_rev_square) cout<<"Adam Number";
  else    cout<<"not adam number";
  
  return 0;
}


// 12^2 = 144
// Reverse of 12 = 21
// 21^2 = 441
// Reverse of 441 = 144
// Square(12) = Reverse(21^2) => 144=144 ✅
