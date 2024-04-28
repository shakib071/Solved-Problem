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

void insertAtHead(node* &head,node* &tail, int val){
     node* n= new node(val);

    if(head==NULL){
        tail=n;
        head=n;
        return;
    }

   n->next=head;
   head->prev=n;
    head=n;
    
}

void insertAtTail(node* &head,node* &tail,int val){
    
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

void display_reverse(node* tail){
  
   node* temp=tail;
   cout<<"R -> ";
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->prev;
   }
   cout<<endl;

}

int length(node* head){

    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}


void insertAtPos(node* &head,node* &tail, int val, int pos){
    if(pos==0){
        insertAtHead(head,tail,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    for(int i=1;i<pos;i++){
         if(temp==NULL) return;
        temp=temp->next; 
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,val);
        return;
    }
   
   n->next=temp->next;
   temp->next=n;
   n->next->prev=n;
   n->prev=temp;
   return;
}

void display(node* head){
    node* temp=head;
      cout<<"L -> ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main(){
     
     node* head=NULL;
     node* tail=NULL;
     
     int q;
     cin>>q;

     while(q--){
        int x,y;
        cin>>x>>y;

        if(length(head)>=x){
            insertAtPos(head,tail,y,x);
          display(head);
          display_reverse(tail);
        }
        else{
            cout<<"Invalid"<<endl;
        }
     }
     
    return 0;

}