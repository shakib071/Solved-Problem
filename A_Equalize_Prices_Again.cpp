#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int q,n;
   cin>>q;

   while(q--){
    int sum=0;
      cin>>n;
      int data[n];
      for(int i=0;i<n;i++){
        cin>>data[i];
        sum=sum+data[i];
      }
      int med=(sum+n-1)/n;//ceiling nicci
        cout<<med<<endl;
     
   }  
  
     
    return 0;

}