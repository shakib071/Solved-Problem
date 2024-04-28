
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    string data;
    node* next;
    node* prev;

    node(string val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node* &head, node* &tail, string val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        tail = n;
        return;
    }

    tail->next = n;
    n->prev = tail;
    tail = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* search(node* head, string item) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == item) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    string s;
    while (1) {
        cin >> s;
        if (s == "end") break;
        insertAtTail(head, tail, s);
    }

    int q;
    cin >> q;
    cin.ignore(); 

    string st;
    getline(cin, st);

    stringstream sst(st);
    string www;
    sst >> www;
    sst >> www;

    node* current = search(head, www);
    cout << current->data << endl;
    q--;

    while (q--) {
        string st;
        getline(cin, st);

        if (st == "prev") {
            if (current->prev != NULL) {
                cout << current->prev->data << endl;
                current = current->prev;
            } 
            else {
                cout << "Not Available" << endl;
            }
        } else if (st == "next") {
            if (current->next != NULL) {
                cout<<current->next->data << endl;
                current=current->next;
            } 
            else {
                cout<<"Not Available"<<endl;
            }
        }
         else {
           stringstream sst(st);
              string www;
               sst >> www;
                sst >> www;
            node* ser = search(head,www);
            if (ser!=NULL) {
                cout<<ser->data<< endl;
                current=ser;
            } 
            else {
                cout<<"Not Available"<<endl;
            }
        }
    }

    return 0;
}