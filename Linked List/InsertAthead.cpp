// insert a newnode at head in a singly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;    
    }
};
// insert at head
void insertAthead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*n1=new Node(10);
    Node *head=n1;
    insertAthead(head,12);
    print(head); 
}