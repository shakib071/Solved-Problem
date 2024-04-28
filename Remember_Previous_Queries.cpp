#include<bits/stdc++.h>
using namespace std;

int main(){
     list<int>mylist;

    int q,x,v;
    cin>>q;

    while(q--){
      cin>>x>>v;

      if(x==0){
       mylist.push_front(v);
      }
      else if(x==1){
       mylist.push_back(v);
      }
      else if(x==2){
       
          // cout<<mylist.size()<<endl;
          if((mylist.size()-1)>=v)
           mylist.erase(next(mylist.begin(), v));
      
       
      }
      cout<<"L -> ";
      for(auto i=mylist.begin();i!=mylist.end();i++){
       cout<<*i<<" ";
      }
      cout<<endl;
      list<int>list2(mylist);
      list2.reverse();
    //   for(auto i=mylist.end()-1;i>=mylist.begin();i--){
    //    cout<<i<<" ";
    //   }
    cout<<"R -> ";
      for(auto i=list2.begin();i!=list2.end();i++){
       cout<<*i<<" ";
      }
       cout<<endl;
    } 
     
    return 0;

}