#include<bits/stdc++.h>
using namespace std;

class node {
    public:

   int data;
    node* next;
 

    node(int val){
        data=val;
        next=NULL;
       
    }
};

void InsertAtHead(node*  &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}

void InsertAtTail(node* &head,int val){
    node* n=new node(val);
  if(head==NULL){
    head=n;//insert at head oo kora jay
    return;
  }
    node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;

    }
    temp->next=n;

}

void insertAtTAilO1(node* &head,node* &tail,int val){
    node* n=new node(val);
    if(head==NULL){
       head=n;
       tail=n;
       return;
    }
      tail->next=n;
      tail=n;
   
}

void print(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

void deleteAtVthIndex(node* &head,int v){
   node* temp=head;
   if(head==NULL){
    return;
   }
   if(v==0){
    if(head!=NULL){
        node* todelete=head;
        head=head->next;
        delete todelete;
       
    }
     return;
   }

   for(int i=1;i<=v-1;i++){
   
    temp=temp->next;
     if(temp==NULL){
        return;
     }
   }

   if(temp->next==NULL) return;

   node* todelete=temp->next;
   temp->next=temp->next->next;
   delete todelete;
}

int main(){

    node* head=NULL;
     
     int q;
     cin>>q;

     while(q--){
        int x,v;
        cin>>x>>v;
        if(x==0){
         InsertAtHead(head,v);
        }
        else if(x==1){
            InsertAtTail(head,v);
        }
        else{
            deleteAtVthIndex(head,v);
        }
        print(head);
     }
     
    return 0;

}