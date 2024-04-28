#include<iostream>
using namespace std;

void One_N(int i){
    if(i==0)return;
    cout<<i;
    if(i!=1)cout<<" ";
    One_N(i-1);
}

int main(){
     
   int n;
   cin>>n;
   One_N(n);  
     
    return 0;

}