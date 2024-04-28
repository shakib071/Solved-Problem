#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int a,b,l;
    cin>>a>>b>>l;

       vector<ll>xp(21);
       vector<ll>yp(21);
       xp[0]=1;
       yp[0]=1;
       ll count=0;

    //    cout<<xp[0]<<yp[0]<<endl;
       int ii=0,jj=0;
    //    map<int,int>mpx;
       map<int,int>mp;
       for(int i=1;i<=20;i++){
         xp[i]=(xp[i-1])*a;
         ii=i;
         if(xp[i]>l)break;
       }
      
        for(int i=1;i<=20;i++){
         yp[i]=(yp[i-1])*b;
         jj=i;
         if(yp[i]>l)break;
       }
       
       for(int i=0;i<ii;i++){
         for(int j=0;j<jj;j++){
            ll val=(xp[i])*(yp[j]);
            if(l%val==0){
               ll val1=l/val;
               if(!mp[val1]){
                  count++;
                  mp[val1]=1;
               }
            }
         }
       }
     

       
       cout<<count<<endl;

   }  
     
    return 0;

}