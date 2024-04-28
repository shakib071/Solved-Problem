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

int search(node* head,int x){
    int index=0;
    node* temp=head;
    while(temp!=NULL){
            if(temp->data==x){
                return index;
            }
            index++;
        temp=temp->next;
    }
    return -1;
}



int main(){
     
    

        int x,T,val;
        cin>>T;
     while(T--){
      node* head=NULL;
      node* tail=NULL;
      while(1){
        cin>>val;
        if(val==-1)break;
        insertAtTAilO1(head,tail,val);

      }
        cin>>x;
      
       
         cout<<search(head,x)<<endl;
        
        

     }

     
    
     
    return 0;

}