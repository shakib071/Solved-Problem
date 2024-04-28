#include<bits/stdc++.h>
using namespace std;

class Pair{
   public:
   string st;
   int num;

   Pair(string s,int i){
    st=s;
    num=i;
   }
};

class cmp{
  public:

   bool operator() (Pair a,Pair b){
    if(a.st>b.st) return true;
    else if(a.st<b.st) return false;
    else{
        if(a.num>b.num) return false;
        else return true;
    }
   }

};

int main(){
     
     priority_queue<Pair, vector<Pair>, cmp>pq;

     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
        string s;
        int num;
        cin>>s>>num;
        Pair obj(s,num);
        pq.push(obj);
     }
     
     while(!pq.empty()){
        cout<<pq.top().st<< " " <<pq.top().num<<endl;
        pq.pop();
     }
     
    return 0;

}