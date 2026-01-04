// Deque stands for doubly ended queue in which insertion and deletion of elements
// can be done from both front and back ends.
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    // adding eleelements at the front 
    d.push_front(1);
    d.push_front(2);
    // adding elements at the back
    d.push_back(3);
    d.push_back(4);
    cout<<"Elements of deque are: ";
    for(int i:d){
        cout<<i<<" ";  //output ->2 1 3 4 
    }
    // removing of elements from front
    d.pop_front();
    cout<<"\nElements of deque after pop_front: ";
    for(int i:d){
        cout<<i<<" ";  //output ->1 3 4
    }   
    // removing of elements from back
    d.pop_back();   
    cout<<"\nElements of deque after pop_back: ";
    for(int i:d){
        cout<<i<<" ";  //output ->1 3
    }
    // printing elements at that particular index
    cout<<"Element at index 1: "<<d.at(1)<<endl; //output ->3
    // front and back
    cout<<"Front->"<<d.front()<<endl;
    cout<<"Back->"<<d.back()<<endl;
    

}