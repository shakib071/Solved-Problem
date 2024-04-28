#include<bits/stdc++.h>
using namespace std;

class node{
    
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class Stack{

    public:

    node* head=NULL;
    node* tail=NULL;
    int size=0;

    void Push(int val){
        size++;
       node* n=new node(val);
       if(head==NULL){
        head=n;
        tail=n;
        return;
       }
       tail->next=n;
       n->prev=tail;
       tail=n;

    }

    void Pop(){
        if(head=NULL) return;
        size--;
        
        node* todelete=tail;
        tail=tail->prev;
        delete todelete;
        if(tail==NULL) head=NULL;
        else tail->next=NULL;
    }

    int Size(){
        return size;
    }

    int Top(){
        return tail->data;
    }

};

class Queue{

    public:

    node* head=NULL;
    node* tail=NULL;
    int size=0;
    
    void Push(int val){
        size++;
       node* n=new node(val);
       if(head==NULL){
        head=n;
        tail=n;
        return;
       }
       tail->next=n;
       n->prev=tail;
       tail=n;

    }

    int Size(){
        return size;
    }

    void Pop(){
        if(head==NULL) return;

        node* todelete=head;
        head=head->next;
        delete todelete;
        if(head==NULL) tail=NULL;
        else head->prev=NULL;
        

    }

    int Top(){
        return head->data;
    }



};




int main() {
     
     Stack st;
     Queue q;

     int n,m;
     cin>>n>>m;
     if(n!=m){
        cout<<"NO"<<endl;
        return 0;
     }
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.Push(x);
     }
      for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.Push(x);
     }

    for(int i=0;i<n;i++){
        if(st.Top()!=q.Top()){
            cout<<"NO"<<endl;
            return 0;
    
    }
    
        st.Pop();
        q.Pop();
    }

    cout<<"YES"<<endl;
     
     
     
    return 0;

}