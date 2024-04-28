#include<iostream>
using namespace std;

void Print(long long int n){
    if(n==0)return;
   Print(n/10);
   cout<<(n%10)<<" ";
   
}

int main(){
     
     int t;
     long long int n;
     cin>>t;

     for(int i=1;i<=t;i++){
        cin>>n;
        if(n<=0){
            cout<<"0";
        }
        else{
           Print(n);
        }
        
        cout<<endl;
     }
     
    return 0;

}