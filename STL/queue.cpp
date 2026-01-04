#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    // adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element of queue: "<<q.front()<<endl; //output ->10
    cout<<"Back element of queue: "<<q.back()<<endl;   //output ->30
    cout<<"Size of queue: "<<q.size()<<endl;           //output ->3

    // removing front element from queue
    q.pop();
    cout<<"Front element after pop(): "<<q.front()<<endl; //output ->20
    cout<<"Size of queue after pop(): "<<q.size()<<endl;  //output ->2

    // checking if queue is empty
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl; //output -> Queue is not empty
    }
}