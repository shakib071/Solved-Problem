#include<bits/stdc++.h>
using namespace std;

int* sort_it(int data[],int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=data[i];
    }
   sort(a,a+n,greater<int>());
   return a;
}

int main(){
     int N;
     cin>>N;
    int A[N];

     for(int i=0;i<N;i++){
        cin>>A[i];
     }

     int *a=sort_it(A,N);
     for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
     
    return 0;

}