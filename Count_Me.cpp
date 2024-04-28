#include<bits/stdc++.h>
using namespace std;

class Count{

    public:
    string st;
    int ct;
    int time;

    Count(string s,int n,int t){
        st=s;
        ct=n;
        time =t;
    }

};

class cmp{
   public:

   bool operator()(Count a, Count b){
     if(a.ct<b.ct) return true;
     else if(a.ct>b.ct) return false;
     else{
        if(a.time>b.time) return true;
        else return false;
     }
   }
};

int main(){
     
     int x;
     cin>>x;
     getchar();
     
     while(x--){
     string s;
     getline(cin,s);
       map<string,int>mp;
       map<string,int>time;
     string word;
     stringstream ss(s);
     int t=0;//time;
     while(ss>>word){
        mp[word]++;
        time[word]=t;
        t++;
     }

    priority_queue<Count,vector<Count>,cmp>pq;
     auto it1=time.begin();
     for(auto it=mp.begin();it!=mp.end();it++){
        
        int t=time[it->first];
        Count obj(it->first,it->second,t);
        pq.push(obj);
     }
        cout<<pq.top().st<<" "<<pq.top().ct<<endl;
    
     }
    return 0;

}