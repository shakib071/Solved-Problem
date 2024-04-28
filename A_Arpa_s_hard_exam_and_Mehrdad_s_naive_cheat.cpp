#include<iostream>
using namespace std;

int main(){
     
     long long int base,pow,result,ll;
     base=1378;
     result=1;
     cin>>pow;
     if(pow==0){
        cout<<"1"<<endl;
     }
     else{
        while(pow){
        if(pow%2==1){
            result=(result*base)%10;
            pow--;
        }
        else{
            base=(base*base)%10;
            pow/=2;
        }
        }
        ll=result%10;
     cout<<(ll)<<endl;
     }
    

     
     
    return 0;

}


//last digit pete kono number last digit er power korlei hoy 
//pura number na korleoo hoy