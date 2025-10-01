//linear search concept in an array
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    bool found=linearSearch(arr,size,5);
    if(found){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present in the array"<<endl;
    }
    return 0;
}