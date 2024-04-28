#include<iostream>
using namespace std;

void recurtion(int i){
  if(i==0)return;
  cout<<"I love Recursion"<<endl;
  recurtion(i-1);

}

int main(){
     
     int n;
     cin>>n;
     recurtion(n);
     
    return 0;

}