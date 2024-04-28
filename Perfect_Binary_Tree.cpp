#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    int level;
    node* left;
    node* right;

    node(int val,int l){
        data=val;
        level=l;
        left=NULL;
        right=NULL;

    }
};



node* input(){
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else {
        root=new node(val,0);
    }
    queue<node*>q;
    if(root!=NULL) q.push(root);

    while(!q.empty()){
        node* parent=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        node* myleft;
        node* myright;

        if(l==-1) myleft=NULL;
        else myleft= new node(l,parent->level+1);
        if(r==-1) myright=NULL;
        else myright= new node(r,parent->level+1);

        parent->left=myleft;
        parent->right=myright;

        if(parent->left!=NULL) q.push(parent->left);
        if(parent->right!=NULL) q.push(parent->right); 
    }
    return root;
}


vector<pair<int,int>> v;

void traverse(node* root){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL){
        v.push_back({root->data,root->level});
    }
   
    traverse(root->left);
    traverse(root->right);
}

int max_height(node* root){
    if(root==NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int main(){
     
     node* root=input();
     v.clear();
     int h=max_height(root)-1;
    //  cout<<h-1;
     traverse(root);
     int ans=1;
     
    //  for(auto i : v){
    //     cout<<i.first<<"  "<<i.second<<endl;
    //     if(i.second != h ){
    //         ans=false;
    //         break;
    //     }
    //  }
    // cout<<v.size();
    int r=pow(2,h);
    if(r==v.size()){

     for(int i=0;i<v.size();i++){
        if(v[i].second !=h){
            ans=0;
            break;
        }
    }

    }
    else ans=0;
    
     if(ans!=0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     
     
    return 0;

}