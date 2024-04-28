#include<iostream>
#include<math.h>
using namespace std;

void fibb_seq_count(int n,int k){

  int ans=0;
  int p=n;
    for(int i=1;i<p;i++){
        int last=p;
        int last_1=i;
         int c=1;
        //last-1 khujteci amra
        for(int j=0;j<k-2;j++){
           
            int temp=last_1;
            int last_1=last-last_1;
            int last=temp;
            if((last<last_1)||(last*last_1)<0){
                c=0;
                break;
            }
        }

       

    }


    return (ans);
}

int main(){
     
     int n,k,t;
     cout<<fibb_seq_count(22,4);
     
    return 0;

}