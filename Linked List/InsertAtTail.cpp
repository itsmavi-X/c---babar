#include<iostream>
using namespace std;
// insert a newnode at tail in a singly linked list
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
// insert at tail
void inserrtAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
// print linked list
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
// main function
int main(){
    Node*n1=new Node(10);
    Node *head=n1;
    Node *tail=n1;
    inserrtAtTail(tail,12);
    print(head);
}