// print the array using function
#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int second[5]={1,2,3,4,5};
    printarray(second,5);
    return 0;
}