#include<iostream>
using namespace std;

long long int factorial(int n){
    if(n==1)return 1;
 long long int ans=factorial(n-1)*n;
    return ans;

}

int main(){
     
   int n;
   cin>>n;

   cout<<factorial(n);  
     
    return 0;

}