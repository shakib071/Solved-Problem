// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// bool find(ll s, ll v[] ,ll n){
    
//     if(n<0){
//         if(s==0) return true;
//         else return false;
//     }

//     if(v[n]<=s ){
//         bool op1=find(s-v[n],v,n-1);
//         bool op2=find(s,v,n-1);
//         return op1 || op2;
//     }
//     if(s<v[n]){
//        bool op1=find(s+v[n],v,n-1);
//        bool op2=find(s,v,n-1);
//        return op1 || op2;
//     }
//     // else{
//     //       bool op2=find(s,v,n-1);
//     //       return op2; 
//     // }
// }

// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//      ll n,x;
//      cin>>n>>x;
//      ll v[n];
//      ll sum=0;
//      for(int i=0;i<n;i++){
//         cin>>v[i];
//         sum+=v[i];
//      }
//     //  if(n==1){
//     //     cout<<"NO";
//     //     return 0;
//     //  }
//        if((x+sum)%2==0){
//          ll s1=(x+sum)/2;
//          if( find(s1,v,n-1))cout<<"YES"<<endl;
//          else cout<<"NO"<<endl;
//        }
//        else{
//         cout<<"NO"<<endl;
//        }
     
//     return 0;

// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int a[21];
ll result;

bool check(ll s,ll index,ll size){
    if(index==size){
        return s==result;
    }

    bool op1=check(s+a[index],index+1,size);
    bool op2=check(s-a[index],index+1,size);
    return op1 || op2;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll n;
     cin>>n>>result;

     for(int i=0;i<n;i++){
        cin>>a[i];
     }

     if(check(a[0],1,n)){
        cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }
     
    return 0;

}