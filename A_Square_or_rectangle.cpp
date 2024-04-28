#include<iostream>
using namespace std;

int main(){
     
   int t,w,h;
   cin>>t;
   for(int i=1;i<=t;i++){
    cin>>w>>h;
    if(w==h){
        cout<<"Square"<<endl;
    }
    else{
        cout<<"Rectangle"<<endl;
    }
   }  
     
    return 0;

}