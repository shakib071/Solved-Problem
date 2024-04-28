#include<iostream>
using namespace std;

int sortOrNot(int data[],int n){
    for(int i=0;i<n-1;i++){
        if(data[i]>data[i+1]){
            return 0;
        }
    }
    return 1;
}

int min_Difference(int data[],int n){
    int minD=data[1]-data[0];
    for(int i=0;i<n-1;i++){
      if((data[i+1]-data[i])<minD){
        minD=data[i+1]-data[i];
      }
    }
    return minD;
}

int not_Sorted(int data[],int n){
     int nsort=((min_Difference(data,n))/2)+1;
     return nsort;
}

int main(){
     
     int x,t;
     cin>>t;
     for(int j=1;j<=t;j++){
     cin>>x;
     int data[x];
    for(int i=0;i<x;i++){
       cin>>data[i];
    }
    if(sortOrNot(data,x)==0){
        cout<<"0"<<endl;
    }
    else if(sortOrNot(data,x)==1){
        int p=not_Sorted(data,x);
        cout<<p<<endl;
    }
     
    }
    return 0;

}