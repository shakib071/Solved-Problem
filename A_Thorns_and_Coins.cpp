#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int t;
     cin>>t;

     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // cout<<s<<endl;
        int c=0;
       for(int i=0;i<n;){
        if(s[i]=='.'){
         if(i+1<n && (s[i+1]=='.' ||s[i+1]=='@' )){
            i++;
         }
         else if(i+2<n &&(s[i+1]=='*' && s[i+2]!='*')){
            i=i+2;
         }
         else if(i+2<n &&(s[i+1]=='*' && s[i+2]=='*')){
            break;
         }
         else {
            break;
         }

       }

       if(s[i]=='@'){
        c++;
         if(i+1<n && (s[i+1]=='.' ||s[i+1]=='@' )){
            i++;
         }
         else if(i+2<n &&(s[i+1]=='*' && s[i+2]!='*')){
            i=i+2;
         }
         else if(i+2<n &&(s[i+1]=='*' && s[i+2]=='*')){
            break;
         }
         else {
            break;
         }
       }

       }
       cout<<c<<endl;
    
       
     }
     
    return 0;

}