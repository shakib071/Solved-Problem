#include<iostream>
using namespace std;

void even_Indices(int data[],int i){
     
      if(i<0)return;
    if(i%2==0)cout<<data[i]<<" ";
  
    even_Indices(data,i-1);
}

int main(){
     
   int n;
   cin>>n;
   int data[n];

   for(int i=0;i<n;i++){
    cin>>data[i];
   } 

   even_Indices(data,n-1); 
     
    return 0;

}