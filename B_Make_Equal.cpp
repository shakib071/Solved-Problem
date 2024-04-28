#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool make_equal(ll m,vector<ll>v,int n){
   ll cur=0;//current a koto extra ace 
   //jeta onno kawke dia same korte parbo
   //mane median er soman korte parbo
   for(int i=0;i<n;i++){
     if(v[i]>=m){
        cur+=(v[i]-m);
     }
     else {
        ll temp=m-v[i];//soman korte ar koto lagbe
        if(cur>=temp){
            cur-=temp;
        }
        else{
            return false;
        }
     }
    //  cout<<cur<<" "<<endl;
   }
   return true;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0,x;i<n;i++){
       cin>>x;
       v[i]=x;
       sum+=x;
    }
    // for(int i=0;i<)
    ll m=(sum/n);//median
    // cout<<make_equal(m,v,n)<<endl;
    if(make_equal(m,v,n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   }  
     
    return 0;

}