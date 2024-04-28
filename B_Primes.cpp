// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// ll func(ll y,ll n){
//     ll x=sqrt(n+y*y);
//     if(x*x==n+y*y){
//         return x;
//     }
// return -1;

    
// }

// void primefactor(ll n){
//     ll y,x=-1;
//     for(int i=1;i<n;i++){
//           y=i;
//           ll f=func(y,n);
//          if(f*f-y*y>=n) break;
        
//          if(f==-1){
//             continue;
//          }
//          else{
//             x=f;
//             break;
//          }
//     }

//     if(x==-1) cout<<-1<<endl;
//     else {
//         if(2*x==n){
//             cout<<x+y<<" "<<x-y<<endl;
//         }
//         else cout<<-1<<endl;
//     }
// }

// int main(){
     
//    ll n;
//    cin>>n;
// primefactor(n);  
     
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;

bool prime(int p){
    if(p<2) return false;
    for(int i=2;i*i<=p;i++){
        if(p%i==0){
            return false;
        }
    }
    return true;
}

int main(){
     
    //  cout<<prime(10008);

    // n even number hole a+b=n hote hole a,b 2 tai even hote hbe
    //ar 2 chara even prime nai
    //tai ekta 2 hobe ar arekta n-2 check korte hbe j prime kina
    //n=4 hole 2,2 hoy er ceye boro even a hoy na

    //n odd hole a+b=n hote hole ekta even arekta odd hote hbe
    //even prime num 2 chara nai .. tai n-2 jodi prime hoy
    //2 and n-2 is the answer
     int n;
     cin>>n;
      
    if(n==2){
        cout<<-1<<endl;
    }
   
    else{
        int p=n-2;
        if(prime(p)){
            cout<<2<<" "<<p<<endl;
        }
        else {
            cout<<-1<<endl;
        }
     }
     
     
    return 0;

}