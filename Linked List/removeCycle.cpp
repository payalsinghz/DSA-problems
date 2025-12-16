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
};
class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
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
    bool isCycle(Node*head){
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"Cycle exists\n";
                return true;
            }
        }
        cout<<"Cycle DNE\n";
        return false;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }cout<<"NULL\n";
    }
};
void removeCycle(Node*head){
        Node*slow=head;
        Node*fast=head;
        bool isCycle=false;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"Cycle exists\n";
                isCycle=true;
                break;
            }
        }
        if(!isCycle){
            cout<<"Cycle DNE\n";
            return;
        }
        slow=head;
        if(slow==fast){             //Special case when complete loop is there
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;
        }else{
        Node*prev=fast;
        while(slow!=fast){
            prev=fast;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=NULL;

    }}

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head;
    
    removeCycle(ll.head);
    ll.print();
    return 0;
}