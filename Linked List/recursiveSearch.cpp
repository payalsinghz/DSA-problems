#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
       data=val;
       next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            
            delete next;
            next=NULL;
        }
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }
    ~List(){
        
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
           head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
           head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }cout<<"NULL\n";
    }
    void insert(int val, int pos){
        Node* newNode=new Node(val);
        Node*temp =head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid\n";
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void pop_front(){
        Node* temp=head;
        if(head==NULL){
            cout<<"Empty";
            return;
        }
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    int search(int key){
        Node*temp= head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    int helper(Node* temp, int key){
        
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next, key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }
    int recursive(int key){
        return helper(head, key);
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    cout<<ll.recursive(2);
    return 0;
}