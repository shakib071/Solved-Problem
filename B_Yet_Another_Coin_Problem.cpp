#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int knapsack(int n,vector<ll>coin,int val){
   
   if(n==0){
    return val;
   }
   
   if(coin[n]<=val){
    int op1=knapsack(n-1,coin,val%(coin[n]))+(val/coin[n]);
    int op2=knapsack(n-1,coin,val);
    return min(op1,op2);
   }
   else {
    return knapsack(n-1,coin,val);
   }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
     vector<ll>coin={1,3,6,10,15};

   while(t--){
    ll n;
    cin>>n;
    // cout<<knapsack(4,coin,n)<<endl;
  
    if(n<30){
        cout<<knapsack(4,coin,n)<<endl;
  //      ll n1=n;
  //      ll ans=INT_MAX;
  //      ll tempans=0;
  //      ll size=coin.size()-1;
  //      while(n1){//15
  //       tempans+=n1/coin[size];
     
  //       n1=n1%coin[size];
  //          size--;
  //      }
  //      ans=min(ans,tempans);
  //      ll size1=coin.size()-2;
  //      ll n2=n;
  //     ll tempans1=0;
  //      while(n2){//10
  //       tempans1+=n2/coin[size1];
     
  //       n2=n2%coin[size1];
  //          size1--;
  //      }
  //      ans=min(ans,tempans1);
  //  ll size2=coin.size()-3;
  //     ll n3=n;
  //      ll tempans2=0;
  //      while(n3){//6
  //       tempans2+=n3/coin[size2];
     
  //       n3=n3%coin[size2];
  //          size2--;
  //      }
  //      ans=min(ans,tempans2);
  //        ll size3=coin.size()-4;
  //      ll n4=n;
  //     ll tempans3=0;
  //      while(n4){//6
  //       tempans3+=n4/coin[size3];
     
  //       n4=n4%coin[size3];
  //          size3--;
  //      }
  //      ans=min(ans,tempans3);
  //     cout<<ans<<endl;
    }
    else{
       ll shakib=(n/15)-1;
       int nn=n-(shakib*15);
       cout<<knapsack(4,coin,nn)+shakib<<endl;
  //       ll n1=nn;
  //      ll ans=INT_MAX;
  //      ll tempans=0;
  //      ll size=coin.size()-1;
  //      while(n1){//15
  //       tempans+=n1/coin[size];
     
  //       n1=n1%coin[size];
  //          size--;
  //      }
  //      ans=min(ans,tempans);
  //      ll size1=coin.size()-2;
  //      ll n2=nn;
  //     ll tempans1=0;
  //      while(n2){//10
  //       tempans1+=n2/coin[size1];
     
  //       n2=n2%coin[size1];
  //          size1--;
  //      }
  //      ans=min(ans,tempans1);
  //  ll size2=coin.size()-3;
  //     ll n3=nn;
  //      ll tempans2=0;
  //      while(n3){//6
  //       tempans2+=n3/coin[size2];
     
  //       n3=n3%coin[size2];
  //          size2--;
  //      }
  //      ans=min(ans,tempans2);
  //        ll size3=coin.size()-4;
  //      ll n4=nn;
  //     ll tempans3=0;
  //      while(n4){//6
  //       tempans3+=n4/coin[size3];
     
  //       n4=n4%coin[size3];
  //          size3--;
  //      }
  //      ans=min(ans,tempans3);
  //     cout<<(ans+shakib)<<endl;
    }
   }
     
    return 0;

}