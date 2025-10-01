//user input to find max and minimum element in an array
#include<iostream>
using namespace std;

int getMax(int arr[],int size){
    int maxValue=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxValue){
            maxValue=arr[i];
        }
    }
    return maxValue;
}

int getMin(int arr[],int size){
    int minValue=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<minValue){
            minValue=arr[i];
        }
    }
    return minValue;
}

int main(){
    int n;
    cin>>n;

    int number[100];
    for(int i=0;i <n;i++){
        cin>>number[i];
    }
    cout<<"Maximum value is : "<<getMax(number,n)<<endl;
    cout<<"Minimum value is : "<<getMin(number,n)<<endl;
}