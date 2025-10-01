#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char value='A'+row+col-2;
        while(col<=n){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++; 
    }
}