#include<iostream>
using namespace std;

int main(){
     
   int r,c;
   cin>>r>>c;

   int A[r][c],B[r][c],Sum[r][c];

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       cin>>A[i][j]; 
    }
   }  
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
     cin>>B[i][j];   
    }
   } 

    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
     Sum[i][j]=A[i][j]+B[i][j];   
    }
   } 
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       cout<<Sum[i][j]<<" "; 
    }
    cout<<endl;
   } 
     
    return 0;

}