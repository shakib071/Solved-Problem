#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int n,maxdef=-1;//maxdifference
   cin>>n;
   int data[2*n];  
   int def,sumdef=0;

   for(int i=0;i<2*n;i++){
    cin>>data[i];
   }

   sort(data,data+2*n);

    for(int i=1;i<2*n-1;i=i+2){
    //   cout<<data[i]<<" "<<data[i+1]<<" ";
     def=data[i+1]-data[i];
     sumdef+=def;
   }
   cout<<sumdef<<endl;
   

     
    return 0;

}