#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n;
     cin>>n;

    long long int data[n],prefsum[n];

     for(int i=0;i<n;i++){
        cin>>data[i];
        if(i==0)prefsum[i]=data[i];
        else prefsum[i]=data[i]+prefsum[i-1];
     }

     for(int i=n-1;i>=0;i--){
        cout<<prefsum[i]<<" ";
     }
     
    return 0;

}