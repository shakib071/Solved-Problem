#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int t;
   string s,x;
   cin>>t;

   while(t--){
    cin>>s>>x;
    int lnS=s.size();
    int lnX=x.size();
    // cout<<lnS<<" "<<lnX<<endl;
    int i=0;
    while(i<lnS){
        if(s[i]==x[0]){
            int p=1,flag=0;
            for(int j=i+1;j<(i+lnX);j++){
                if(s[j]!=x[p])
                {
                    flag=1;
                    break;
                }
                p++;
            }
            if(flag==0){
              s[i]='#';
               for(int j=i+1;j<(i+lnX);j++){
                s[j]='1';
               }
               i=i+lnX;
            }
            else i++;

        }
        else i++;
     }
     for(int k=0;k<lnS;k++){
        if(s[k] !='1')
        {
            cout<<s[k];
        }
     }
     cout<<endl;
   }
     
    return 0;

}