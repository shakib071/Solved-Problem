#include<iostream>
using namespace std;

int xorr(int arr[],int n){

        
    for(int j=0;j<n;j++){
        int xorsum=0;
        for(int i=0;i<n;i++){
            if(j==i){
                continue;
            }
            xorsum=xorsum^arr[i];
        }
        if((xorsum^arr[j])==0){
            return arr[j];
        }
    }
    return 0;
}
int main(){
     

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int x;
        cin>>x;
        int arr[x];
        for(int k=0;k<x;k++){
          cin>>arr[k];
        }
      
       
        cout<<xorr(arr,x)<<endl;
       
    }
     
     
    return 0;

}