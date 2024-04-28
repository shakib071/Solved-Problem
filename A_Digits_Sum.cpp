#include<iostream>
using namespace std;


int interesting(int n){
  
   int count=n/10;
   if(n%10==9){
    count++;
   }
    return count;
}

int main(){
     
     int t,i,n;
     cin>>t;

     for(i=1;i<=t;i++){
        cin>>n;
        cout<<interesting(n)<<endl;
     }
     
    return 0;

}