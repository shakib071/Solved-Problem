#include<bits/stdc++.h>
using namespace std;

int main(){
     
     string s;
     cin>>s;
    //  cout<<s<<endl;
     int i=0;
     while(s[i]!='\0'){
     if(s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T'){
        cout<<" ";
        i=i+5;
     }
     else{
        cout<<s[i];
        i++;
     }
     }
    return 0;

}