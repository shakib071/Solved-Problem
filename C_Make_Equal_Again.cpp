#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0,x;i<n;i++){
        cin>>x;
        v[i]=x;
    }
    int start=1,end=n-2;
    
    while(v[start]==v[0] && start<n){
        start++;
    }
    if(start==n){
        cout<<0<<endl;
    }
    else {
        while(v[end]==v[n-1] && end>=0){
            end--;
        }
        // cout<<start<<" "<<end<<endl;
        if(v[0]==v[n-1]){
            cout<<(end-start+1)<<endl;
        }
        else {
            if((n-end-1)>=start){
              cout<<(end-0+1)<<endl;
            }
            else{
                cout<<(n-1-start+1)<<endl;
            }
        }
    }
   }  
     
    return 0;

}