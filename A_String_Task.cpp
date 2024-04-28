#include<bits/stdc++.h>
using namespace std;
//run kore kintu cf nicche na kno janina 
class node{
    public:
    char data;
    node* next;

    node(char val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,node* &tail,char val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        tail=n;
        return;
    }
    tail->next=n;
    tail=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

int main(){
     node* head=NULL;
     node* tail=NULL;

     string s;
     cin>>s;

     for(int i=0;i<s.size();i++){
        if(s[i]=='a' ||s[i]=='A' ||s[i]=='e' || s[i]=='E' ||s[i]=='i' ||s[i]=='I' ||s[i]=='o' ||s[i]=='O' ||s[i]=='u' ||s[i]=='U'){
            continue;
        }
        else{
            insertAtTail(head,tail,'.');
            if(s[i]>='A' && s[i]<='Z'){
                insertAtTail(head,tail,tolower(s[i]));
            }
            else{
                insertAtTail(head,tail,s[i]);
            }
        }
     }
     
     display(head);
     
    return 0;

}