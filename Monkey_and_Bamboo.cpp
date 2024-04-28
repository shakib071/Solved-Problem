#include<bits/stdc++.h>
using namespace std;

int monkeyandBamboo(int h,int a,int b){
    if(h<=a){
        return 1;
    }
    else{
        float left=h-a;
        if((a-b)<=0) return -1;
        float d=(left/(a-b));
        

        int ans=((ceil(d))*2)+1;
        return ans;
    }
    
    // int rise =a;
    // if(h<=rise){
    //     return 1;
    // }
    // for(int i=2;;i++){

    //     if(h<=rise){
    //         return i-1;
    //     }
    //     if(rise<0){
    //         return -1;
    //     }
      
    //   if(i%2==0){
    //     rise=rise-b;
    //   }
    //   else{
    //     rise=rise+a;
    //   }

    // }
}

int main(){
     
     int t;
     cin>>t;
     while(t--){
        int h,a,b;
        cin>>h>>a>>b;
        if(monkeyandBamboo(h,a,b)==-1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<monkeyandBamboo(h,a,b)<<endl;
        }
     }
     
    return 0;

}