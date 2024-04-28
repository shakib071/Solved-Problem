// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//      int t;
//      cin>>t;



//      while(t--){
//         ll n,x,y,q;
//         cin>>n>>x>>y;
        
//         for(int i=0;i<n;i++){
//           cin>>q;
//           v[i]=q;
//         }

//           int countpair=0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                if((v[i]%x+v[j]%x)%x==0 && (v[i]%y==v[j]%y)){
//                     countpair++;
//                }
//             }
//         }
//         cout<<countpair<<endl;
//      }
     
//     return 0;

//     //time a mair khay

// }


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    

     int t;
     cin>>t;

     while(t--){
        ll n,x,y,q;
        cin>>n>>x>>y;
         map<pair<int,int>,int> mp;
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>q;
            int mx=q%x;
            int my=q%y;
            // ei 2 valuer jonno mx1 mx2 thake mane pair hobe
            //jotogula thakbe totogula pair

            int mx1=((x-mx))%x;
            int mx2=(my+y)%y;
            ans+=mp[{mx1,mx2}];
            //thakle + korbe na thakle 0 add hbe
            mp[{mx,my}]++;
            // er pore mx my er map a add holo
        }
    
        cout<<ans<<endl;
     }
 

}