// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
     
//     ll t;
//      cin>>t;
      
//       while(t--){
//        ll n,m;
//         cin>>n>>m;
       
//         ll data[n];
//         ll prod=1;
        
//         for(int i=0;i<n;i++){
//             cin>>data[i];
//             prod=(prod*data[i]);
//         }
//         string s;
//         cin>>s;
//         cout<<prod%m<<" ";
//         ll start=0,end=n-1,ii=0;
//         ll nn=n;
        
//         while(start<end && ii<s.size() && nn>0){
//             if(s[ii]=='L'){
//                  prod=(prod/data[start]);
//                  cout<<prod%m<<" ";
//                  start+=1;
               
               
//             }
//             else{
//                  prod=(prod/data[end]);
//                  cout<<prod%m<<" ";
//                  end-=1;
                
//             }
//             nn--;
//             ii++;
            
//         }
//         //integer overflow
//         cout<<endl;
       
//       }
     
//     return 0;

// }



#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> data(n);
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<data[i]<<" ";
    // }

    // cout<<endl;

    string s;
    cin>>s;
    // cout<<s<<endl;
    int l=0,r=n-1;
    for(int i=0;i<n-1;i++){
        if(s[i]=='L'){
            l++;
        }
        else r--;
    }
    // cout<<l<<r<<endl;
   vector<int>b(n);
   b[n-1]=data[l]%m;
   for(int i=n-2;i>=0;i--){
    if(s[i]=='L'){
        l--;
       b[i]=(b[i+1]*data[l])%m;
    }
    else{
        r++;
        b[i]=(b[i+1]*data[r])%m;
    }
   }

   for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
   }
   cout<<endl;
    
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