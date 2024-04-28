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

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;

    while(temp->next!=NULL){
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

int difference(node* head){
      if(head==NULL) return -1;
    int max=INT_MIN;
    int min=INT_MAX;
    node* temp=head;
    while(temp!=NULL){
     if(temp->data>max){
        max=temp->data;
     }
     if(temp->data<min){
        min=temp->data;
     }
     temp=temp->next;
    }
    int differ=max-min;
  return differ;
}

void print(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int main(){
      node* head=NULL;
      node* tail=NULL;

      int x;

      while(1){
        cin>>x;
        if(x==-1)break;
        // insertAtTail(head,x);
        insertAtTAilO1(head,tail,x);
      }
    
    // print(head);
    

    if(difference(head)!=-1){
        cout<<difference(head)<<endl;
    }
    
     
     
    return 0;

}