#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int d[3][3];

   bool a[3][3];

   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        a[i][j]=1;
        cin>>d[i][j];
    }
   }

    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
     

   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       if(d[i][j]%2==1){
        a[i][j]=!a[i][j];
        if(i+1<3) a[i+1][j]=!a[i+1][j];
        if(i-1>=0) a[i-1][j]=!a[i-1][j];
        if(j+1<3) a[i][j+1]=!a[i][j+1];
        if(j-1>=0) a[i][j-1]=!a[i][j-1];
       }
     
    }
   
   }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
     
     
    return 0;

}