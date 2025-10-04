#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int n=3;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        int sum=arr[i]+1;
        if(sum<10){
            cout<<arr[i]+1<<endl;
            break;
        }
    }
}