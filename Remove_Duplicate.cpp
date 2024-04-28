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

void print(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
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

void removeDuplicate(node* &head){
   
   if(head==NULL || head->next==NULL) return;
    
    node* temp=head;

    while(temp != NULL){
      node* temp1=temp;
      while(temp1->next!=NULL){
        if(temp1->next->data==temp->data){
            node* todelete=temp1->next;
            temp1->next=temp1->next->next;
            delete todelete;
            // continue;
        }
       else  temp1=temp1->next;
      }
      temp=temp->next;
    }
    

}

int main(){
     
     node* head=NULL;
     node* tail=NULL;

     int val;

     while(1){
        cin>>val;
        if(val==-1) break;
        insertAtTAilO1(head,tail,val);
     }
    //  print(head);
     
     removeDuplicate(head);
 
     print(head);
     
    return 0;

}