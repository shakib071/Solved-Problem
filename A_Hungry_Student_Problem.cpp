#include<iostream>
using namespace std;

int check(int p){
    if(p%3==0){
        return 1;
    }
    else if(p%7==0){
        return 1;
    }
   
     else{
     for(int a=0;a<=33;a++){
        for(int b=0;b<=33;b++){
            if((b*3+a*7)==p){
                return 1;
            }
        }
     }
   }
    return 0;
}

int main(){
     
   int n,x;
   cin>>n;
   for(int i=1;i<=n;i++){
    cin>>x;
    if(check(x)==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    }
    
     
    return 0;

}