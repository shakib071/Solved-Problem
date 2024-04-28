#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s;
   cin>>s;
//    cout<<s<<endl;
   int data[26];
   memset(data,0,sizeof(data));
//    cout<<data[10];  
     for(int i=0;i<s.size();i++){
        int a=s[i]-'a';
       data[a]+=1;
     }
     int count=0;
     for(int i=0;i<26;i++){
        if(data[i]>0){
            count++;
        }
   }
   if(count%2==0){
    cout<<"CHAT WITH HER!"<<endl;
   }
   else {
    cout<<"IGNORE HIM!"<<endl;
   }

    return 0;

}