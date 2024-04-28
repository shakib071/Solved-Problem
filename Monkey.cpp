#include<bits/stdc++.h>
using namespace std;

int main(){
     
     char S[100001];

     while(cin.getline(S,100001)){
        int l=strlen(S);
        sort(S,S+l);
        for(int i=0;i<l;i++){
            if(S[i]!=' '){
               cout<<S[i];
            }
          
        }
        cout<<endl;
     }
     
    return 0;

}