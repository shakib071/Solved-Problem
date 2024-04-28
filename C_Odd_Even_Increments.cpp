#include<iostream>
using namespace std;

int even_odd(int data[],int n){
    int a=data[0]%2;
    int b=data[1]%2;

    for(int i=0;i<n;i++){
        if(i%2==0){
            if((data[i]%2)!=a){
                return -1;
            }

        }
        if(i%2==1){
            if((data[i]%2)!=b){
                return -1;
            }
        }
       
    }
 return 1;
}
int main(){
     
     int t,i,n;
     cin>>t;

     for(i=1;i<=t;i++){
        cin>>n;
        int data[n];
        for(int j=0;j<n;j++){
            cin>>data[j];
        }
        if(even_odd(data,n)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
     
    return 0;

}