#include<iostream>
#include<math.h>
using namespace std;

int square(int a1,int b1,int a2, int b2){
    int sq=(a1*b1)+(a2*b2);
    int sqq=sqrt(sq);
    if((sqq*sqq)==sq){
      return 1;
    }
    else{
        return 0;
    }
}

int double_check(int a1,int b1,int a2, int b2){
   if(a1==a2 && (b1+b2)==a1){
     return 1;
   }
   else if(b1==b2 && (a1+a2)==b1){
    return 1;
   }
   else if(a1==b1 && (a2+b2)==a1){
    return 1;
   }
   else if(a2==b2 && (a1+b1)==a2){
    return 1;
   }
   else if(a1==b2 && (b1+a2)==a1){
    return 1;
   }
   else if(a2==b1 && (a1+b2)==a2){
    return 1;
   }
   return 0;

}


int main(){
     
    int t,i,a1,a2,b1,b2;
    cin>>t;
    for(i=1;i<=t;i++){
      cin>>a1>>b1;
      cin>>a2>>b2;
      if(square(a1,b1,a2,b2)==0){
        cout<<"No"<<endl;
      }
      else{
       if(double_check(a1,b1,a2,b2)==1){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
      }
    }
     
    return 0;

}