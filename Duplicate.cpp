#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n,flag=0;
     cin>>n;
     
     int data[n];

     for(int i=0;i<n;i++){
        cin>>data[i];
     }

     sort(data,data+n);

     for(int i=0;i<n-1;i++){
        if(data[i]==data[i+1]){
          cout<<"YES"<<endl;
          flag=1;
          break;
        }
     }

     if(flag==0)cout<<"NO"<<endl;
     
    return 0;

}