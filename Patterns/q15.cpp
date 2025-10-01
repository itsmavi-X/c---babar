/*
A
B C
D E F
G H I J
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char start='A';
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}