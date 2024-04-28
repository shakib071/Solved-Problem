#include<iostream>
using namespace std;

long long int Sum(int data[],int i){
  
  if(i<=0){
   return 0;
  }

  return (Sum(data,i-1)+data[i-1]);
  
}

int main(){
     int n;
     cin>>n;
     int data[n];
     for(int i=0;i<n;i++){
        cin>>data[i];
     }

    cout<<Sum(data,n)<<endl;
     
    return 0;

}