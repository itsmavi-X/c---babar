//sum of all elements in an array
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of all elements in the array is : "<<sum<<endl;
    return 0;
}