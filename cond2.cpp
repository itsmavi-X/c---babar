/*If the number is positive , negative or zero*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(n>0){
        cout<<"The number is positive"<<endl;
    }
    else if(n<0){
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"Number is zero"<<endl;
    }
    return 0;
    
}