#include<iostream>
#include<queue>
using namespace std;
int main(){
    // by default priority_queue is a max-heap
    priority_queue<int> maxHeap;
    // adding elements to max-heap
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    cout<<"Top element of max-heap: "<<maxHeap.top()<<endl; //output ->30
    cout<<"Size of max-heap: "<<maxHeap.size()<<endl;       //output ->3

    // removing top element from max-heap
    maxHeap.pop();
    cout<<"Top element after pop(): "<<maxHeap.top()<<endl; //output ->20
    cout<<"Size of max-heap after pop(): "<<maxHeap.size()<<endl; //output ->2

    // checking if max-heap is empty
    if(maxHeap.empty()){
        cout<<"Max-heap is empty"<<endl;
    }else{
        cout<<"Max-heap is not empty"<<endl; //output -> Max-heap is not empty
    }

    // creating a min-heap using priority_queue
    priority_queue<int, vector<int>, greater<int>> minHeap;
    // adding elements to min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    cout<<"Top element of min-heap: "<<minHeap.top()<<endl; //output ->10
    cout<<"Size of min-heap: "<<minHeap.size()<<endl;       //output ->3

    // removing top element from min-heap
    minHeap.pop();
    cout<<"Top element after pop(): "<<minHeap.top()<<endl; //output ->20
    cout<<"Size of min-heap after pop(): "<<minHeap.size()<<endl; //output ->2

    // checking if min-heap is empty
    if(minHeap.empty()){
        cout<<"Min-heap is empty"<<endl;
    }else{
        cout<<"Min-heap is not empty"<<endl; //output -> Min-heap is not empty
    }
}