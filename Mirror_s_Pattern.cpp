#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int n;
    cin>>n;

    int data[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            data[i][j]=0;
        }
       
    }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==0){
            data[i][j]=j+1;
           }
           if(i==n-1){
            data[i][j]=n-j;
           }
           if(j==0){
            data[i][j]=i+1;
           }
           if(j==n-1){
            data[i][j]=n-i;
           }
        }
        
       
    }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(data[i][j]==0){
                cout<<" ";
            }
           else cout<<data[i][j];
        }
        cout<<endl;
       
    }



     
    return 0;

}