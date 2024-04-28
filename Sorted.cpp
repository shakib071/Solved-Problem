#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    // vector<int>v(n);
    set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
         st.insert(x);
        
    }
  
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
   }  
     
    return 0;

}