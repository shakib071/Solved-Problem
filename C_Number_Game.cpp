#include<iostream>
using namespace std;

bool oddodd(int n){
    for(int i=3;i*i <= n;i=i+2){
        if(n%i==0){
            return true;
        }
    }
    return false;
}

int main(){
     
   int t,n;
   cin>>t;
   while(t--){
    cin>>n;
    if(n==1){
        cout<<"FastestFinger"<<endl;
    }
   else if(n==2){
        cout<<"Ashishgup"<<endl;
    }
    else if(n%2==1){
         cout<<"Ashishgup"<<endl;
    }
    else{
        int p=n,count=0;
        while(p%2==0){
            p=p/2;
            count++;

        }
        if(p==1 ){
            cout<<"FastestFinger"<<endl;
        }
        else if(p%2==1 && count>1){
             cout<<"Ashishgup"<<endl;
        }
        else if(p%2==1 && count==1){
            if(oddodd(p)==true){
                 cout<<"Ashishgup"<<endl;
            }
            else{
                cout<<"FastestFinger"<<endl;
            }
        }

    }
   }  
     
    return 0;

}