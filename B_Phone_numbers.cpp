#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//done
int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;
     vector<char>v;
     if(n%2==0){
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            if(i%2==0){
             v.push_back(x);
            }
            else{
              v.push_back(x);
             if(i!=n-1) v.push_back('-');
            }
        }
     }
     else{
        int ind=n/2-1;
         for(int i=0;i<n;i++){
            char x;
            cin>>x;
          v.push_back(x);

          if(i==0 || i==1){
            continue;
          }
          else if(i==2){
        
            if(i!=n-1) v.push_back('-');
          }
         else if(i%2==0){
           if(i!=n-1) v.push_back('-');
          }

        }
     }

    for(char val : v){
        cout<<val;
    }
     
    return 0;

}