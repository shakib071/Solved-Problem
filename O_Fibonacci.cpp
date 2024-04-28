#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int fib[33]={0,1};
//  fib[0]=0;
//  fib[1]=1;

 void fibonacci(int i,int n){
    if(i>n) return;
    fib[i]=fib[i-1]+fib[i-2];
    fibonacci(i+1,n);
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;
     if(n<3){
        cout<<fib[n-1]<<endl;
     }
     else{
        fibonacci(2,n-1);
        cout<<fib[n-1]<<endl;
     }
     
    return 0;

}