#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s;
   cin>>s;

      int ii=s.size()-1;
   while(s[ii]=='/' && ii>=0){
    s[ii]='0';
    ii--;
   }

   if(ii<0){
    cout<<'/'<<endl;
    return 0;
   }

   
   for(int i=0;i<s.size();){

    if(s[i]=='/'){
         while(s[i+1]=='/'){
            s[i+1]='0';
            i++;
         }
         i++;
    }
    else{
        i++;
    }
   }

  
 
//    cout<<s;



for(int i=0;i<s.size();i++){
    if(s[i]!='0')cout<<s[i];
}
     
    return 0;

}