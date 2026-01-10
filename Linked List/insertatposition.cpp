#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtmiddle(Node* tail,Node* head,int position,int d){
    // insert at head
    if(position==1){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
        return;
    }
    // traverse to the position
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // insert at tail
    if(temp->next==NULL){
        Node* nodeToinsert=new Node(d);
        temp->next=nodeToinsert;
        return;
    }
    // create new node
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next= temp->next;
    temp->next=nodeToinsert;
}
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*n1=new Node(10);
    Node* head=n1;
    Node*tail=n1;
    insertAtmiddle(tail,head,1,12);
    print(head);
}