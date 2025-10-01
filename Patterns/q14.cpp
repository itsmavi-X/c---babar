/*A
  B B
  C C C
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){    /*for pyramid pattern like this we will always use this condition col less than equal to row*/
            cout<<char('A'+row-1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}