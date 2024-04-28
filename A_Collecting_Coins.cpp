#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int main(){
     
   int t,a,b,c,n;
   cin>>t;
   while(t--){
    cin>>a>>b>>c>>n;
    int m=(a+b+c+n);
    int m1=max(a,b);
    int m2=max(m1,c);
    int aa=(m2-a)+(m2-b)+(m2-c);
    int mm=m/3;
    if(mm*3==m){
        if(n>=aa){
          cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl; 
        }
       
    }
    else{
        cout<<"NO"<<endl;
    }
   }  
     
    return 0;

}