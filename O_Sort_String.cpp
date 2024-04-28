#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n;
     cin>>n;
     char s[n+1];
     for(int i=0;i<n;i++){
        cin>>s[i];
     }
     s[n]='\0';
     sort(s,s+n);
     cout<<s;
     
    return 0;

}