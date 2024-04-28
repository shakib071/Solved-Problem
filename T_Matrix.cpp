#include<iostream>
using namespace std;

int main(){
     
     int n;
     cin>>n;
     int data[n][n];
    int sum=0,sum1=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>data[i][j];
        }
        
     }
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==j){
            sum = sum+data[i][j];
        }
        if((i+j)==(n-1)){
            sum1=sum1+data[i][j];
        }
        }
        
     }
     int diff=abs(sum1-sum);
     cout<<diff<<endl;
    return 0;

}