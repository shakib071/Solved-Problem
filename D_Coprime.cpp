#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
     
     int t;
     cin>>t;
   
     for(int i=1;i<=t;i++){
        int maxindex=-1;
        int n;
        cin>>n;
        int data[n];
        for(int j=0;j<n;j++){
            cin>>data[j];
        }
        for(int j=0;j<n;j++){
            for(int k=j;k<n;k++){
                if (gcd(data[j],data[k])==1)
                {
                  int sumindex=j+k+2;
                  if(maxindex<=sumindex){
                    maxindex=sumindex;
                  } 
                }
                
            }
        }
        if(maxindex>0){
            cout<<maxindex<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
     }
     
    return 0;

}