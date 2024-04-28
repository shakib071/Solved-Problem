#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int n;
   cin>>n;
   char data[n][n];

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j ||(n-1)==(i+j) ){
        data[i][j]='*';
      }
     else if(i<j){
        data[i][j]='7';
     }

      else{
        data[i][j]='0';
      }
    }
   }  
    
      for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<data[i][j];
    }
    cout<<endl;
   }  

     
    return 0;

}