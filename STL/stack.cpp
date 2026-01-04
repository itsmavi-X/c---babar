#include<iostream>
#include<stack>
using namespace std;    
int main(){
    stack<int> s;
    // adding elements to stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top element of stack: "<<s.top()<<endl; //output ->30
    cout<<"Size of stack: "<<s.size()<<endl;       //output ->3

    // removing top element from stack
    s.pop();
    cout<<"Top element after pop(): "<<s.top()<<endl; //output ->20
    cout<<"Size of stack after pop(): "<<s.size()<<endl; //output ->2

    // checking if stack is empty
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl; //output -> Stack is not empty
    }
}