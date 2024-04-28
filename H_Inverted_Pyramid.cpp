#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(int i,int n){
    if(i<0) return;
    for(int j=0;j<(n-1-i);j++){
        cout<<" ";
    }
    for(int j=0;j<2*(i+1)-1;j++){
        cout<<"*";
    }
    cout<<endl;
    solve(i-1,n);
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;

     solve(n-1,n);
     
    return 0;

}