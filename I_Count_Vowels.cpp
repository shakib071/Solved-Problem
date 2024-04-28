#include<iostream>
#include<string.h>
using namespace std;

int count(string S,int i,int n){
    if(i==n)return 0;
    int ans= count(S,i+1,n);
    if(S[i]>='A' && S[i]<='Z'){
        S[i]=S[i]+32;
    }
    
   if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
    return ans+1;
   }
   else{
    return ans;
   }
  
}

int main(){
     
     string S;
     getline(cin,S);
     
     int ln=S.length();
    
    cout<<count(S,0,ln);

    return 0;

}