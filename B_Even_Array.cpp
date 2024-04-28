#include<iostream>
using namespace std;

int goodorbad(int data[],int n){
    for(int i=0;i<n;i++){
        if((data[i]%2)!=(i%2)){
            return -1;
        }
    }
    return 1;
}

int moves(int data[],int n){
    int ceven=0,codd=0;
    for(int i=0;i<n;i++){
        if(data[i]%2==1 && i%2==0){
         ceven++;
        }
        if(data[i]%2==0 && i%2==1){
            codd++;
        }
    }
    if(codd==ceven){
        return ceven;
    }
    else{
        return -1;
    }
}

int main(){
     
   int t,n;
   cin>>t;

   for(int i=1;i<=t;i++){
    cin>>n;
    int data[n];
    for(int j=0;j<n;j++){
        cin>>data[j];
    }

    if(goodorbad(data,n)==-1){
        cout<<moves(data,n)<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
   }  
     
    return 0;

}