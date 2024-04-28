#include<bits/stdc++.h>
using namespace std;




int main(){
     
     int t;
     cin>>t;
   vector<int>v;
     while(t--){
         v.clear();
        int n;
        cin>>n;
        int data[n];
        for(int i=0;i<n;i++){
            cin>>data[i];
        }
        sort(data,data+n);
          
        for(int i=0;i<n-1;){
            int j=i+1;
            while(i<n-1){
              if(abs(data[i]-data[j])<=1){
                data[i]=-1;
              }
              else{
                v.push_back(data[i]);
              }
              i++;
              j++;
            }
        }

        if(v.size()<1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

     }
     
    return 0;

}