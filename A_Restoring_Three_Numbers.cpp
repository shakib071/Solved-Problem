#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int X[4];

     cin>>X[0]>>X[1]>>X[2]>>X[3];

     int mx=max({X[0],X[1],X[2],X[3]});
     X[0]=mx-X[0];
     X[1]=mx-X[1];
     X[2]=mx-X[2];
     X[3]=mx-X[3];
     
     for(int i=0;i<=3;i++){
        if(X[i]!=0){
            cout<<X[i]<<" ";
        }
     }
     
    return 0;

}