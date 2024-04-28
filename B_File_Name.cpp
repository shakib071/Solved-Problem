#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   string s;
   cin>>s;
  
   vector<int>a;

   for(int i=0;i<n;i++){
    int sum=0;
    while(s[i]=='x'){
        sum++;
        i++;
    }
    if(sum>=3){
        
        a.push_back(sum);
    }
   }  
  int anss=0;
   for(int i=0;i<a.size();i++){
    if(a[i]>=3){
      anss=anss+(a[i]-2);
    }
   }
   cout<<anss<<endl;
     
    return 0;

}