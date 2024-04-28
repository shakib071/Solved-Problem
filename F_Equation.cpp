#include<bits/stdc++.h>
using namespace std;

int main(){
     
    long long int x,n;
     cin>>x>>n;
     if(n<2){
        cout<<"0"<<endl;
     }
     else{
        long long int s=0;
        for(int i=2;i<=n;i+=2){
          s=s+pow(x,i);//power codeforse a thik kaj kore 
          //kintu terminal a kaj kore na ..vull dekhay
          
        }
        cout<<s<<endl;
     }
     
    return 0;

}