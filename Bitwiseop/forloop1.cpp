/*sum of 1 to n number using for loop*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        

    }
    cout<<sum<<endl;
    
}