#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<<a<<endl;

    char b='V';
    cout<<b<<endl;

    float f=1.2;
    cout<<f<<endl;

    double db= 1.23;
    cout<<db<<endl;

    bool bl=true;
    cout<<bl<<endl;

    int size=sizeof(a);
    cout<<"Size of a is:"<<size<<endl;

    int size2=sizeof(db);
    cout<<"Size of double is:"<<size2<<endl;

    /*Type-Casting*/ 
    int a1='a';
    cout<<a1<<endl;  /*output will be 97*/

    char ch = 98;
    cout<<ch<<endl; /*output will be 'b'*/
}