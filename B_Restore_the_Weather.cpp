// #include<bits/stdc++.h>
// using namespace std;



// int main(){
     
//      int t,n,k,p;
//      cin>>t;

     

//      while(t--){
//         cin>>n>>k;
//        vector<pair<int,int>>a(n);
//      vector<int>b(n),ans(n);
//         for(int i=0;i<n;i++){

//             cin>>a[i].first;
//             a[i].second=i;
//             // a.push_back(make_pair(p,i));
//         }
        
//         for(int i=0;i<n;i++){
//             cin>>p;
//             b.push_back(p);
//         }
//         sort(a.begin(),a.end());//sort 1st element in pair
//         sort(b.begin(),b.end());
//         for(int i=0;i<n;i++){
//             ans[a[i].second]=b[i];
//         }
//         for(int i=0;i<ans.size();i++){
//            cout<<ans[i]<<" ";
//         }
//         cout<<endl;

       
//      }
     
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;

// bool myCompare(pair<int, int>p1,pair<int,int>p2){
//     return p1.first<p2.first;//shudhu 1st ta sort korbo
// }

int main(){
     
     int t,n,k;
     cin>>t;

     

     while(t--){
        cin>>n>>k;
        vector<pair<int,int>>v;//vector vitore dile hbe
        
        int a[n],b[n],ans[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(make_pair(a[i],i));
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(v.begin(),v.end());//sort 1st element in pair
        sort(b,b+n);
        for(int i=0;i<n;i++){
            ans[v[i].second]=b[i];
        }
        for(int i=0;i<n;i++){
           cout<<ans[i]<<" ";
        }
        cout<<endl;

       
     }
     
    return 0;

}