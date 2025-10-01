#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number you want to check:"<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
        i++;
    }
    return 0;

}