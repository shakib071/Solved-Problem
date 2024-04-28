// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//    int t;
//    cin>>t;

//    while(t--){
//     int n;
//     cin>>n;
//     vector<int>v1;
//     vector<int>v2;
//     for(int i=0,xx;i<n;i++){
//      cin>>xx;
//      v1.push_back(xx);
//     }
//     // for(int i=0;i<n;i++){
//     //     cin>>b[i];
//     // } 
//     for(int ii=0;ii<n;ii++){
//         cout<<v1[ii];
//     }
//     // int count=0;
//     // int zerocount=0,onecount=0;
//     // for(int i=0;i<n;i++){
//     //     if(a[i]!=b[i]){
//     //         if(a[i]==1){
//     //           if(zerocount>0){
//     //             zerocount--;
//     //           }
//     //           else {
//     //             count++;
//     //             onecount++;
//     //           }
//     //         }
//     //         else{
//     //          if(onecount>0){
//     //             onecount--;
//     //          }
//     //          else {
//     //             count++;
//     //             zerocount++;
//     //          }
//     //         }
//     //     }
//     // }
//     // cout<<count<<endl;    

//    }  
     
//     return 0;

// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   
   while(t--){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
     int count=0;
    int zerocount=0,onecount=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            if(s1[i]=='1'){
              if(zerocount>0){
                zerocount--;
              }
              else {
                count++;
                onecount++;
              }
            }
            else{
             if(onecount>0){
                onecount--;
             }
             else {
                count++;
                zerocount++;
             }
            }
        }
    }
    cout<<count<<endl;    

   
    
   }
     
    return 0;

}