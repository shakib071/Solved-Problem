#include<iostream>
using namespace std;

int main(){
     
     int n,m;
     cin>>n>>m;

     int data[n][m];

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>data[i][j];
        }
     }

     for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
        cout<<data[i][j]<<" ";
        }
        cout<<endl;
     }
     
     
    return 0;

}