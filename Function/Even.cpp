#include<iostream>
using namespace std;

bool numeven(int a){
    if(a%2==0){
        return true;
    }
    return false; 
}
int main(){
    int num;
    cin>>num;
    if(numeven(num)){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }