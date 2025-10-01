#include<iostream>
using namespace std;

int main(){
    int number[10]; //declaration of array
    int second[5]={1,2,3,4,5}; //declaration and initialization
    cout<<"Everytrhing is working fine"<<endl;
    cout<<"Value at index 2 is : "<<second[2]<<endl;

    //print the array
    int n=5;
    for(int i=0;i<n;i++){
        cout<<second[i]<<" ";
    }

    //size of array
    int secondSize=sizeof(second)/sizeof(int);
    cout<<"\nSize of array is : "<<secondSize<<endl;
    return 0;
}