#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    // adding elements to the list
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);
    cout<<"Elements of list are: ";
    for(int i:l){
        cout<<i<<" ";  //output ->5 10 20 30
    }
    // removing elements from the list
    l.pop_back();
    cout<<"\nElements of list after pop_back: ";
    for(int i:l){
        cout<<i<<" ";  //output ->5 10 20
    }
    l.pop_front();
    cout<<"\nElements of list after pop_front: ";
    for(int i:l){
        cout<<i<<" ";  //output ->10 20
    }
    // size of the list
    cout<<"\nSize of the list: "<<l.size()<<endl; //output ->2
    // front and back elements
    cout<<"Front element: "<<l.front()<<endl; //output ->10
    cout<<"Back element: "<<l.back()<<endl;   //output ->20

    // inserting element at specific position using iterator
    auto it = l.begin();
    l.insert(it,15); //inserting 15 at the beginning
    cout<<"Elements of list after insertion: ";
    for(int i:l){
        cout<<i<<" ";  //output ->15 10 20
    }
}