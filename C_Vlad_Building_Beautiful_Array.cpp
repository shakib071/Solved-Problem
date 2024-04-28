#include<bits/stdc++.h>
using namespace std;

// bool double_check(int data[],int n){
//     for(int i=0;i<n-1;i++){
//      if(data[i]==data[i+1])return true;
//     }
//     return false;
// }

// int finddouble(int data[],int n){
//      int  count=1;
//     for(int i=0;i<n-1;i++){
//      if(data[i]==data[i+1])count++;
//     }
//     return count;
// }
// bool check_if_allelementisSame(int data[],int n){
//     int i=0;
//     while(i<n){
//         if(data[i]!=data[0])return false;
//         i++;
//     }
//     return true;
// }

// void solve(){
  
//     int n,even=0,odd=0;
//     cin>>n;
//     int data[n];
//     for(int i=0;i<n;i++){
//       cin>>data[i];
//       if(data[i]%2==0) even++;
//       else odd++;
//     } 
   

//     if(n==2 && data[0]%2!=data[1]%2 && data[0]>data[1] && data[0]%2==0 && data[1]%2==1){
//         cout<<"YES"<<endl;

//     }
//     else if(n==2 && data[0]%2!=data[1]%2 && data[0]>data[1] && data[0]%2==1 && data[1]%2==0){
//     cout<<"NO"<<endl;
 
//     }
//     else{
   
//      sort(data,data+n);
//   if(double_check(data,n)==true){
//         if(check_if_allelementisSame(data,n)==true)cout<<"YES"<<endl;
//        else if(finddouble(data,n)%2==0)cout<<"NO"<<endl;
//       else cout<<"YES"<<endl;
//     }
//     else if(even==0 || odd==0) cout<<"YES"<<endl;
    
//     else if(odd>=even) cout<<"YES"<<endl;
    
//     else cout<<"NO"<<endl;
//     }
    

// }

void solve(){
    vector<int>e,o;
     int n,even=0,odd=0,min,flag=0;
    cin>>n;
    int data[n];
    for(int i=0;i<n;i++){
      cin>>data[i];
      if(data[i]%2==0){
   even++;
      } 
      else odd++;
    } 
    sort(data,data+n);
    for(int i=0;i<n;i++){
        if(data[i]%2==0) e.push_back(data[i]);
        else o.push_back(data[i]);//already sorted

    }
    if(even>odd)min=odd;
    else min=even;
    for(int i=0;i<min;i++){
        if(e[i]<o[i]) {
            flag=1;
            break;
        }
    }

     if(even==0 || odd==0) cout<<"YES"<<endl;
     else if(flag==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}

int main(){
     
   int t;
   cin>>t;

   while(t--) solve();  
     
    return 0;

}