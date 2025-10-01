//maximum element in a n array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int maxVal=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }

    }
    cout<<"The max value is : "<<maxVal<<endl;
    return 0;
}                                        