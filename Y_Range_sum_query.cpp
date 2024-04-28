#include<bits/stdc++.h>
using namespace std;
//prefix sum array./
//arekta file ace ei nam a
//cumulative gonoshonkha technique

int main(){
     
   long long int n,q,l,r,sum;

   cin>>n>>q;

   long long int  data[n],prefsum[n];

   for(int i=0;i<n;i++){
     cin>>data[i];
     if(i==0){
   prefsum[i]=data[i];
     } 
     else {
        prefsum[i]=data[i]+prefsum[i-1];
     }
   }


  while(q--){

    cin>>l>>r;
    l--;
    r--;
     if(l==0) sum=prefsum[r];
    else  sum=prefsum[r]-prefsum[l-1];
     cout<<sum<<endl;
     
  }
     
    return 0;

}