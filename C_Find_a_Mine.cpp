#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll query(ll x,ll y){
    cout<<"? "<<x<<" "<<y<<endl;
    ll val;
    cin>>val;
    return val;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll t;
     cin>>t;
     while(t--){
      ll n,m;
      cin>>n>>m;
      ll x1=0,x2=0,x3=0,y1=0,y2=0,y3=0,x4=0,y4=0;
      ll q1=query(1,1);
      if(q1<=m-1){
         x1=1;//up
         y1=q1+1;
      }
      else {
         x1=1+q1-(m-1);
         y1=m;
      }
      if(q1<=n-1){
        x2=q1+1;//down
        y2=1;
        
      }
      else {
         x2=n;
         y2=1+q1-(n-1);
         
      }
      ll q2=query(x1,y1);
      ll q3=query(x2,y2);
       x3=x1+(q2/2);
       y3=y1-(q2/2);
       x4=x2-(q3/2);
       y4=y2+(q3/2);
       ll q4=query(x3,y3);
       if(q4==0){
        cout<<"! "<<x3<<" "<<y3<<endl;
       }
       else{
        cout<<"! "<<x4<<" "<<y4<<endl;
       }
     }
     
    return 0;

}