#include<iostream>
using namespace std;

int powerof2(long long int n){
    if(n==0){
        return 0;
    }
   long long int p=(n)&(n-1);
   if(p==0){
    return 1;
   }
   else{
    return 0;
   }
    
}

int main(){
    long long int x;
     cin>>x;

     if(powerof2(x)==1){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
     
     
    return 0;

}