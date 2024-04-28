#include<iostream>
using namespace std;

// int unique(int arr[],int n){

//         int xorsum=0;

//         for(int i=0;i<n;i++){
//             xorsum=xorsum ^ arr[i];
//         }
//         return xorsum;
// }
int main(){
     
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int x;
        cin>>x;
        int arr[x];
        int  pp=0;
        for(int k=0;k<x;k++){
            cin>>arr[k];
            
        }
        cout<<pp<<endl;
    }
     
     
    return 0;

}