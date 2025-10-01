#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;
    if(ch>='0' && ch<='9'){
        cout<<"the value is numeric"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"the value is upper case"<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"lower case"<<endl;

    }
    return 0;

}