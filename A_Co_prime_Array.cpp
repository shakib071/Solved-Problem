#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

class node{
  public:
  int data;
  node* next;

  node(int val){
    data=val;
    next=NULL;
  }
};

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;

    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtPosition(node* &head,int val,int pos){
    node* n= new node(val);
    node* temp=head;
    n->next=NULL;

    if(pos<1){
        return;
    }
    if(pos==1){
        n->next=temp;
        head=n;
       return;
    }
    else{
        while(--pos>1){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }

}

int main(){
   node* head=NULL;
    
    int count=0,tempcount=0;
   int n;
   cin>>n;
   int data[n];
   for(int i=0;i<n;i++){
    cin>>data[i];
    insertAtTail(head,data[i]);
   }
   for(int i=0;i<n-1;i++){
    if(gcd(data[i],data[i+1])==1){
        continue;
    }
    else{
        count++;
        int pos=i+1+count;
       insertAtPosition(head,1,pos);
       
    }
   }
   cout<<count<<endl;
   display(head);

    return 0;

}