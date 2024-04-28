#include<bits/stdc++.h>
using namespace std;

class tv{
    public:
    int l,r,index;
    tv(int ll,int rr,int i){
        l=ll;
        r=rr;
        index=i;

    }
};

class cmp{
    public:
    bool operator()(tv a,tv b){
        if(a.l>b.l){
            return true;
        }
        else if(a.l<b.l){
            return false;
        }
        else {
            if(a.r>b.r){
              return true;
            }
            else{
                return false;
            }
        }
    }
};

  priority_queue<tv,vector<tv>,cmp>pq;
  
   map<int,int>maxmap;
   map<int,int>minmap;

int solve(){
    int mn,mx;
    mn=pq.top().l;
    mx=pq.top().r;
   
    
    
    
    while(!pq.empty()){
     
        if(maxmap.count(pq.top().l) && maxmap[pq.top().l]>pq.top().r){
            return pq.top().index;
        }
        else{
            pq.pop();
            if(pq.empty()==true){
             
             break;
            }

           else  if(minmap.count(pq.top().l) && maxmap.count(pq.top().r) &&  minmap[pq.top().l]<pq.top().l && maxmap[pq.top().r]>pq.top().r){
              
                return pq.top().index;
            }
           
           else if(pq.top().l>=mn && pq.top().r<=mx){
                return pq.top().index;
            }
           else if(pq.top().l>mx+1){
                return -1;
            }
           else if(pq.top().r>mx){
                mx=pq.top().r;
            }
        }
    }

    return -1;

}

int main(){
     
     

     int n;
     cin>>n;
     int l,r;

     for(int i=1;i<=n;i++){
        cin>>l>>r;
        pq.push(tv(l,r,i));
        if(maxmap.count(l) && maxmap[l]<r){
            maxmap[l]=r;
        }
        else if(!maxmap.count(l)){
            maxmap[l]=r;
        }

        if(minmap.count(r) && minmap[r]>l){
            minmap[r]=l;
        }
        else if(!minmap.count(r)){
            minmap[r]=l;
        }
     }
 
    //  for(auto it=minmap.begin();it!=minmap.end();it++)
    //  {
    //     cout<<it->first<<" "<<it->second<<endl;
    //  }

     if(n==1){
        cout<<-1<<endl;
     }
     else{
        cout<<solve()<<endl;
     }

    

    //  while(!pq.empty()){
    //     cout<<pq.top().l<<" "<<pq.top().r<<" "<<pq.top().index<<endl;
    //     pq.pop();
    //  }

  
     
    return 0;

}
