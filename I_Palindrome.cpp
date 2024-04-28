#include<iostream>
#include<string.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
     
   string S;

 getline(cin,S);

string SS=S;
reverse(SS.begin(),SS.end());

if(S==SS) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    return 0;

}