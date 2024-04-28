#include<bits/stdc++.h>
using namespace std;

int main(){
     
   stack<char>st;

   int t;
   cin>>t;
    // getchar();

   while(t--){
     string x;
     cin>>x;
    //  cout<<x.size()<<endl;
    
     for(int i=0;i<x.size();i++){

        
        
        if(x[i]=='1'){
            if(st.empty()){
                st.push(x[i]);
            }
            else{
                
                if(st.top()=='0'){
                    st.pop();
                }
                else{
                    st.push(x[i]);
                }
            }

        }

        else{

             if(st.empty()){
                st.push(x[i]);
            }
            else{
                
                if(st.top()=='1'){
                    st.pop();
                }
                else{
                    st.push(x[i]);
                }
            }

        }

    //    st.push(x[i]);
    //    if(st.top()=='1'){
    //     int top=st.top();
    //     st.pop();
    //     if(!st.empty()){
    //     if(st.top()=='0'){
    //         st.pop();
    //     }
    //     else{
    //         st.push(top);
    //     }
    //     }
    //     else{
    //         st.push(top);
    //     }
    //    }
    //    else if(st.top()=='0'){
    //       int top=st.top();
    //     st.pop();
    //      if(!st.empty()){
    //     if(st.top()=='1'){
    //         st.pop();
    //     }
    //     else{
    //         st.push(top);
    //     }
    //     }
    //     else{
    //         st.push(top);
    //     }
    //    }
     }

     if(st.empty()) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    while(!st.empty()){
        st.pop();
    }
     
   }

     
    return 0;

}
