#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;
    
    if(age>=60){
      cout<<"super senior man";
    }
    else if(age<60 && age>=40){
      cout<<"senior man";
    }
    else if(age<40 && age>=20){
      cout<<"junior man";
    }
    else if(age<20 && age>=18){
      cout<<"adult";
    }
    else if(age<18 && age>=10){
      cout<<"children";
    }
    else if(age<10 && age>=4){
      cout<<"boy";
    }
    else{
      cout<<"baby";
    }
    return 0;
}