//make a character array and print it using function
#include<iostream>
using namespace std;

void printcharArray(char arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    char ch[5]={'a','b','c','d','e'};
    printcharArray(ch,5);
    return 0;
}