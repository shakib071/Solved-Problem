#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;
    char data[n][n];
    int fi,fj;//1st 1 er index rakhbo
    bool get=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>data[i][j];

            if(data[i][j]=='1' && get==false){
                fi=i;
                fj=j;
                get=true;
            }
        }
    }
   
     if(data[fi][fj+1]=='1' && data[fi+1][fj]=='1'){
        cout<<"SQUARE"<<endl;
     } 
     else cout<<"TRIANGLE"<<endl;
   }
     
    return 0;

}