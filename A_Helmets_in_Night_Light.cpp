#include<bits/stdc++.h>
using namespace std;

//node diye kal korbi
//milche 
// kintu run time error dicche

class node{
    public:
    int data1;
    int data2;
    
    node* next;

    node(int val1,int val2){
        data1=val1;
        data2=val2;
        next=NULL;
    }

};

void insertAtTail(node* &head,node* &tail,int val1,int val2){
    node* n=new node(val1,val2);
    if(head==NULL){
        head=n;
        tail=n;
        return;
    }
    tail->next=n;
    tail=n;
}

bool cmp(node a,node b)
{
    return a->data2<b->data2;
}


void solve(){
  node*  head=NULL;
   node* tail=NULL;
    long long int n,p;
    cin>>n>>p;
   long long int sum=p;
  long long  int left=n-1;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
        insertAtTail(head,tail,a[i],b[i]);
    }
    sort(head,tail,cmp);
    
    
}


void  solve(){
   long long int n,p;
    cin>>n>>p;
   long long int sum=p;
  long long  int left=n-1;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<long long int,long long int>>v;
     for(int i=0;i<n;i++){
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end(),cmp);
    int c=0;
    while(1){
        if((v[c].second) < p){
        if(left>= (v[c].first)){
            left=left-(v[c].first) ;
            sum=sum+((v[c].second)*(v[c].first));
        }
        else {
            sum=sum+((v[c].second)*left);
            left=0;
        }
        c++;
        }
        else break;
    }

    if(left>0){
         sum=sum+(p*left);
    }
cout<<sum<<endl;

}


int main(){
     
     int t;
     cin>>t;

     while(t--){
     solve();
      
     }
     
    return 0;

}