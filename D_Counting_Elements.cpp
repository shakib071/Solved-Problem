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
   int count=0,duplicate=0;
   for(int i=1;i<n;i++){
      if((data[i]==data[i-1])){

        duplicate++;
      
      }
      else if(data[i]==data[i-1]+1){
        count=count+duplicate+1;//1 dici karon 5 ta suplicate hole 1st ta jog kore nai
        //korleooo problemhoy ..tai last a kore dici
        duplicate=0;
      }
      else{
        duplicate=0;
      }
      
   }
   cout<<count<<endl;
     
    return 0;

}