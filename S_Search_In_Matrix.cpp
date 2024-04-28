#include<iostream>
using namespace std;

int main(){
     
     int n,m,x,flag=0;
     cin>>n>>m;
     int data[n][m];
   
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>data[i][j];
        }  
     }

     cin>>x;

   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(data[i][j]==x){
                flag=1;
                break;
            }
        }  
     }

  if(flag==1){
    cout<<"will not take number"<<endl;
  }
  else{
    cout<<"will take number"<<endl;
  }
    return 0;

}