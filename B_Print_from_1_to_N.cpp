#include<iostream>
using namespace std;

void One_N(int i,int n){
    if(i==n+1)return;
    cout<<i<<endl;
    One_N(i+1,n);
}

int main(){
     
   int n;
   cin>>n;
   One_N(1,n);  
     
    return 0;

}