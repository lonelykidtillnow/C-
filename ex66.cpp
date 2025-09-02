#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=0;i<=20;i++){
      switch(i){
        case 0: i+=5;
        case 1: i+=2;
        case 5: i+=5;
        default: i+=4;
      }
      cout<<i<<" ";
    }
    
    return 0;
}

// Start: i=0

// case 0 matches → i+=5 → i=5
// Falls through to case 1 → i+=2 → i=7
// Falls through to case 5 → i+=5 → i=12
// Falls through to default → i+=4 → i=16
// Print 16
// Loop increments i++ → i=17

// Now i=17 (second iteration)

// No case matches, so default runs directly → i+=4 → i=21
// Print 21
// Loop increments i++ → i=22
// Now i=22
// Condition i<=20 fails → loop ends.

// Final Output
// 16 21