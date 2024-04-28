#include<bits/stdc++.h>
using namespace std;

int main(){
     
   stack<char> st;
   int t;
   string x;
   cin>>t;

   while(t--){
     cin>>x;
     int flag=0;
     for(int i=0;i<x.size();i++){
        if(x[i]=='0'){
            st.push(x[i]);
        }

        else if(x[i]=='1'){
            if(st.empty()){
                flag=1;
                break;
            }
            else{
                st.pop();
            }
        }
     }
     if(flag==0){
    if(st.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;
     while(!st.empty()){
        st.pop();
     }
   } 
     
    return 0;

}