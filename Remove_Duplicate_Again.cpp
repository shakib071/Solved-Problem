#include<bits/stdc++.h>
using namespace std;

int main(){
     
     list<int>mylist;

     while(true){
        int x;
        cin>>x;
        if(x==-1) break;
        mylist.push_back(x);
     }

    //  for(auto i : mylist){
    //     cout<<i<<" ";
    //  }
     mylist.sort();
     mylist.unique();

       for(auto i : mylist){
        cout<<i<<" ";
     }

    return 0;

}