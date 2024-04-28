#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
     int n;
     cin>>n;

     if(n<5){
        cout<<0<<endl;
        return 0;
     }
   
    //  for(auto val : v) cout<<val<<" ";
    
    for(int i=4;i<=n;i++){
        int c=0,ii=0,nn=i;
        
        while(nn>0 && ii<v.size()){
           if(nn%v[ii]==0) c++;
            while(nn%v[ii]==0){
                nn=nn/v[ii];
            }
            ii++;

        }
        if(c==2) count++;

    }
    cout<<count<<endl;
     
    return 0;

}