/*Print 1 to n*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to print"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i;
        i+=1;
    }
    return 0;
}