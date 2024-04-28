// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// void solve(){
//     ll n;
//     cin>>n;
//     ll a[n];
//     bool eqval=true;
//     ll maxx=-1;
//     map<ll,ll>mp;
//     map<ll,ll>vis;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(i!=0 && a[i-1]!=a[i]) eqval=false;
//         if(a[i]>maxx)maxx=a[i];
//         mp[a[i]]=1;
//          if(!vis[a[i]])vis[a[i]]=i+1;
//     }
//     if(eqval){
       
//        cout<<2<<endl;
//        cout<<1<<" "<<n/2<<endl;
//        cout<<n/2+1<<" "<<n<<endl;
//     }
//     else {
//          if(!mp[0]){
//              cout<<2<<endl;
//          cout<<1<<" "<<n/2<<endl;
//           cout<<n/2+1<<" "<<n<<endl;
//          }
//          else {
//             ll nai=-1;
//             for(int i=1;i<=maxx;i++){
//               if(!mp[i]) {
//                 nai=i;
//                 break;
//               }
//             }
//           if(nai==-1){
//             cout<<-1<<endl;
//           }
//           else {
//             // vector<int>ans;
//             // ans.push_back(1);
//             ll mx=-1;
//             //  cout<<vis[0]<<endl;
//             for(int i=0;i<nai;i++){
//               mx=max(mx,vis[i]);
//             }
//             // ans.push_back(mx);
//             bool viss[n];
//             memset(viss,false,sizeof(viss));
//            ll count=0;
//           //  cout<<mx<<endl;
//             for(int i=mx;i<n;i++){
//                if(!viss[a[i]] && a[i]<nai){
//                 viss[a[i]]=true;
//                 count++;
//                }
//                if(count==nai) break;
//             }
//             if(count==nai){
//                 cout<<2<<endl;
//                 cout<<1<<" "<<mx<<endl;
//                 cout<<mx+1<<" "<<n<<endl;
//             }
//             else{
//                 cout<<-1<<endl;
//             }

//           }
//          }
//     }
// }
// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//    int t;
//    cin>>t;

//    while(t--)  solve(); 
     
//     return 0;

// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
  int n;
  cin>>n;
  vector<int>v(n);
  map<int,int>mp;
  for(int i=0;i<n;i++){
    cin>>v[i];
    // cout<<v[i]<<endl;
    mp[v[i]]=1;
    
  }
  if(!mp[0]){
    cout<<2<<endl;
    cout<<1<<" "<<n/2<<endl<<n/2+1<<" "<<n<<endl;
    return;
  }

  int mex=-1;
  for(int i=0;i<1e5+5;i++){
    if(mp[i]==0){
      mex=i;
      break;
    }
  }
  // cout<<mex<<endl;
  if(mex==-1){
    cout<<-1<<endl;
  }
  else {
      mp.clear();
     bool valid=false;
     int ans=-1;

    // for(int i=0;i<n;i++){
    //   if(!mp[v[i]] && v[i]<mex){
    //     mp[v[i]]=1;
    //   }
    //   if(mp.size()==mex && vvv==false){
    //     ans=i+1;
    //     vvv=true;
    //     mp.clear();
    //   }
    //   if(mp.size()==mex && vvv==true){
    //     valid=true;
    //     break;
    //   }
    // }
    int count=0;
    for(int i=0;i<n;i++){
      if(!mp[v[i]] && v[i]<mex){
        mp[v[i]]=1;
        count++;
        
      }
      if(count==mex){
        ans=i+1;
        break;
      }
    }
    // cout<<ans<<endl;
    mp.clear();
    count=0;
    for(int i=ans;i<n;i++){
      if(!mp[v[i]] && v[i]<mex){
        mp[v[i]]=1;
        count++;
      }
      if(count==mex){
        valid=true;
        break;
      }
    }

    if(valid){
      cout<<2<<endl;
       cout<<1<<" "<<ans<<endl;
       cout<<ans+1<<" "<<n<<endl;
    }
    else{
      cout<<-1<<endl;
    }

  }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    solve();
   }  
     
    return 0;

}