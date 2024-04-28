#include<iostream>
using namespace std;

int main(){
     
     int t,n;
     cin>>t;

     while(t--){
        cin>>n;
        int A[2*n],even[2*n],odd[2*n];
        int p=0,pp=0;
        for(int i=0;i<2*n;i++){
            cin>>A[i];
             if(A[i]%2==0){
            even[p]=i;
            p++;
        }
        else{
            odd[pp]=i;
            pp++;
        }
        }

        if((p-1)%2==0 &&(pp-1)%2==0&&p>0&&pp>0){
           for(int i=1;i+1<p;i=i+2){
            cout<<even[i]+1<<" "<<even[i+1]+1<<endl;
           }
           for(int i=1;i+1<pp;i=i+2){
            cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl;
           }
          
        }
        else{
            if(p>pp){
                for(int i=2;i+1<p;i=i+2){
                     cout<<even[i]+1<<" "<<even[i+1]+1<<endl;
                }
                for(int i=0;i+1<pp;i=i+2){
                    cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl;
                }
            }
            else{
                for(int i=0;i+1<p;i=i+2){
                     cout<<even[i]+1<<" "<<even[i+1]+1<<endl;
                }
                for(int i=2;i+1<pp;i=i+2){
                    cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl;
                }
            }
        }
        
        
     }
     
    return 0;

}