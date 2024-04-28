#include<iostream>
#include<limits.h>
using namespace std;

int maxx(int data[],int n,int i){
    if(i==n)return INT_MIN;
 int mx=maxx(data,n,i+1);
if(data[i]>mx){
    return data[i];
}
else{
    return mx;
}
}

int main(){
     
     int n;
     cin>>n;
     int data[n];
     for(int i=0;i<n;i++){
      cin>>data[i];
     }

     cout<<maxx(data,n,0);
     
     
    return 0;

}