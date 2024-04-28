#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int t,n,s;
     cin>>t;
     while(t--){
        int g=0;
        cin>>n>>s;
        // cout<<s;
        int A[n];
      for(int i=0;i<n;i++){
        cin>>A[i];
      }
      if(n>=3){
       for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
          for(int k=j+1;k<n;k++){
            if(A[i]+A[j]+A[k]==s){
                g=1;
                break;
            }
          }
         
        }
        
       }
       if(g==1){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
      }
      else if(g==0){
        cout<<"NO"<<endl;
      }
     }
     
    return 0;

}