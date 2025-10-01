//write the code to swap the alternate elements of the array
#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i++){
        swap(arr[i],arr[i+1]);
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}