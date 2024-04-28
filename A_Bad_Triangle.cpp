#include<iostream>
using namespace std;

int main(){
     
    long long int t,l,n;
     cin>>t;

     for(int l=1;l<=t;l++){
        cin>>n;
        long long int data[n];
        for(int ii=0;ii<n;ii++){
            cin>>data[ii];
        }
        if(data[n-1]>=(data[0]+data[1])){
            cout<<"1 2 "<<n<<endl;
        }
        else{
        cout<<"-1"<<endl;
     }
     }
    return 0;

}