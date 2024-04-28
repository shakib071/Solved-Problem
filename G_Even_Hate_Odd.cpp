#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int t,n;
    cin>>t;
    while(t--){
        int even=0,odd=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]%2)odd++;
         else even++;
        }
        if(n%2==0){
         int ans=abs(even-odd)/2;
         cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
     
    return 0;

}