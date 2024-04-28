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

// void display(node* head){
//     node* temp=head;

//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

int length(node* head){
      int count=0;
       node* temp=head;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    return count;
}

// bool ispalindrom(node* &head,node* tail){
//     node* temp1=head;
//     node* temp2=tail;
//     int j=length(head)-1;
//   for(int i=0;i<length(head);i++){
//      if(i>=j) break;
//      if(temp1->data!=temp2->data){
//         return false;
//      }
//      j--;
//      temp1=temp1->next;
//      temp2=temp2->prev;

//   }

//    return true;
// }

bool ispalindrom(node* &head,node* tail){
    node* temp1=head;
    node* temp2=tail;
    
   while(temp1 != NULL || temp2 !=NULL){
     
     if(temp1->data!=temp2->data){
        return false;
     }
     temp1=temp1->next;
     temp2=temp2->prev;

  }

   return true;
}

int main(){
     node* head=NULL;
     node* tail=NULL;

     while(true){
        int x;
        cin>>x;
        if(x==-1) break;
        insertAtTail(head,tail,x);
     }

    //  display(head);
     
//    int l=length(head);
//    cout<<l<<endl;
// cout<<length(head);

if(ispalindrom(head,tail)){
    cout<<"YES"<<endl;
}

else cout<<"NO"<<endl;
     
    return 0;

}