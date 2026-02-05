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

// Age Condition Using Switch

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //write your code here
//     int age;
//     cin>>age;
//     switch(age/10){
//         case 1:
//             if(age<13)  cout<<"child";
//             else        cout<<"teenager";
//             break;
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             cout<<"adult";
//             break;
//         default:
//             cout<<"senior citizen";
//             break;
//     }
    
//     return 0;
// }