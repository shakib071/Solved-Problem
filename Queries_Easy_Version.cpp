// #include<bits/stdc++.h>
// using namespace std;

// int main(){
     
//      int q;
//      cin>>q;
//      vector<int> v1;//even
//      vector<int>v2;//odd

//      while(q--){
//         int a;
//         cin>>a;

//         if(a==1){
//           int x;
//           cin>>x;
//           if(x%2==0){
//               v1.push_back(x);
//               sort(v1.begin(),v1.end());
//           }
           
//             else {
//                v2.push_back(x);
//                 sort(v2.begin(),v2.end());
//             }
//         }
//         else if(a==2){
//           if(v1.empty()){
//             cout<<"empty"<<endl;
//           }
//           else{
//             int temp=v1[0];
//             int s1=v1.size()-1;
//             v1[0]=v1[s1];
//             v1.pop_back();
//               sort(v1.begin(),v1.end());
//               cout<<temp<<endl;
//           }
//         }
//         else if(a==3){
//             if(v2.empty()){
//             cout<<"empty"<<endl;
//           }
//            else{
//             int temp2=v2[0];
//             int s2=v2.size()-1;
//             v2[0]=v2[s2];
//             v2.pop_back();
//               sort(v2.begin(),v2.end());
//               cout<<temp2<<endl;
//           }
//         }
//      }
     
//     return 0;

// }
//passed but timeout

#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int q;
     cin>>q;

     priority_queue<int, vector<int>,greater<int>>pq1;//even
     priority_queue<int, vector<int>,greater<int>>pq2;//odd

      while(q--){
         int a;
         cin>>a;
         if(a==1){
          int x;
          cin>>x;
          if(x%2==0){
            pq1.push(x);
          }
          else {
            pq2.push(x);
          }
         }

         else if(a==2){
            if(pq1.empty()){
                cout<<"empty"<<endl;
            }
            else {
                cout<<pq1.top()<<endl;
                pq1.pop();
            }
         }

         else if(a==3){
               if(pq2.empty()){
                cout<<"empty"<<endl;
            }
            else {
                cout<<pq2.top()<<endl;
                pq2.pop();
            }
         }
      } 


    return 0;

}