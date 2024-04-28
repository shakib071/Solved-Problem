#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n;
     cin>>n;
     int data[n];

     for(int i=0;i<n;i++){
        cin>>data[i];
}
     sort(data,data+n);

     for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
     }
     
    return 0;

}