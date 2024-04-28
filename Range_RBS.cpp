#include<bits/stdc++.h>
using namespace std;


int main(){
     
     int n;
     cin>>n;
    getchar();
    string s;
    cin>>s;
    
    int q;
    cin>>q;
    stack<char>st;

    // for(int i=0;i<n;i++){
    //     cout<<s[i];
    // }

    while(q--){
        int l,r;
        cin>>l>>r;
        bool flag=true;
        for(int i=l-1;i<r;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.empty() || st.top()==')'){
                    st.push(s[i]);
                }

               else if(st.top()=='(' || st.top()=='?'){
                st.pop();
               }
            }
            else if(s[i]=='?'){
                if(st.empty()){
                    st.push(s[i]);
                }
                else {
                    if(st.top()=='?'){
                        st.pop();
                    }
                    else if(st.top()==')'){
                       st.push(s[i]);
                    }
                }
            }
        }

         if(!st.empty() ){
            cout<<"YES"<<endl;
            continue;
         }
          else{
            while(!st.empty()){
                char p=st.top();
                st.pop();
                if(st.top()=='?'){
                    if(p=='('){
                        st.pop();
                    }
                    else {
                        flag=false;
                    }

                }
               else if(st.top()=='('){
                    if(p==')' || p=='?'){
                        st.pop();
                    }
                    else {
                        flag=false;
                    }
                }
            }
          }

          if(st.empty() && flag==true){
            cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
        
    }
     
    return 0;

}