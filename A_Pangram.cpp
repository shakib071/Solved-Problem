#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int data[26];
   memset(data,0,sizeof(data));

   int n;
   cin>>n;
   string s;
   cin>>s;

   if(n<26){
    cout<<"NO"<<endl;
   }
   else {
      for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            int x=s[i]-'A';
            data[x]+=1;
        }
        else{
            int x=s[i]-'a';
            data[x]+=1;
        }
      }
      bool ans=true;
      for(int i=0;i<26;i++){
        if(data[i]==0){
            ans=false;
            break;
        }
      }

      if(ans){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }
     
     
    return 0;

}