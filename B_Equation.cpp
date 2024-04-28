#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
//    float a=5.0001;
//    cout<<setprecision(10)<<a;  

  
  float  a,b,c;
  cin>>a>>b>>c;
  if(a==0 && b==0 && c==0){
    cout<<-1<<endl;
    return 0;
  }
  if(a==0 && b==0){
    cout<<0<<endl;
    return 0;
  }
//   cout<<a<<b<<c;

float d=b*b-4.0*a*c;

  
  if(d==0){
    cout<<1<<endl;
   float x=-b/(2*a);
   cout<<fixed<<setprecision(10)<<x<<endl;
  }
  else if(d<0){
    //no solution
    cout<<0<<endl;
  }
  else{
    //2 distinct solution
    if(a==0){
        cout<<1<<endl;
        float x=(-c/b);
        cout<<fixed<<setprecision(10)<<x<<endl;
        return 0;
    }
    cout<<2<<endl;
    float x1=(-b+sqrt(d))/(2.0*a);
    float x2=(-b-sqrt(d))/(2.0*a);
 
    if(x1<x2){
         
         cout<<fixed<<setprecision(10)<<x1<<endl<<x2<<endl;
    }
    else{
        cout<<fixed<<setprecision(10)<<x2<<endl<<x1<<endl;
    }


  }
     
    return 0;

}