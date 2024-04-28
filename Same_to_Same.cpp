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

bool sameTosame(node*head1,node*head2){
    node* temp1=head1;
    node* temp2=head2;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
     if(temp1!=NULL && temp2==NULL) return false;
     if(temp1==NULL && temp2!=NULL) return false;
    return true;
}

int main(){
     node* head1=NULL;
     node* head2=NULL;
     node* tail1=NULL;
     node* tail2=NULL;
     
     

     while(1){
        int val;
        cin>>val;
        if(val==-1) break;
        insertAtTAilO1(head1,tail1,val);
     }
      while(1){
        int val;
        cin>>val;
        if(val==-1) break;
        insertAtTAilO1(head2,tail2,val);
     }
     
    //  print(head1);
    //  print(head2);
      
     if(sameTosame(head1,head2)==true){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
     
    return 0;

}