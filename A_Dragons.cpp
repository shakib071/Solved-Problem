#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int>p1,pair<int,int>p2){
    return p1.first<p2.first;//shudhu 1st ta sort korbo
}

int main(){

    vector<pair<int,int>>v;
     
    int s,n,x,y;
    cin>>s>>n; 

    for(int i=1;i<=n;i++){
        cin>>x>>y;
       v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),myCompare);

    for(int i=0;i<v.size();i++){
        if(s>v[i].first){
            s=s+v[i].second;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
        if(i+1==v.size()){
            cout<<"YES"<<endl;
        }
    }
     
    return 0;

}