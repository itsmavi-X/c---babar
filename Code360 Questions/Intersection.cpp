/*You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in 
non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.*/

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[100],arr2[100];
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<endl;
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<endl;
    }
    int i=0,j=0;
    for(int i=0;i<n;i++){
        int element=arr1[i];
        for(int j=0;j<m;j++){
            if(element ==arr2[j]){
                cout<<element<<endl;
                arr2[j]=-1234;
                break;
            }
        }
    }
    return 0;

}