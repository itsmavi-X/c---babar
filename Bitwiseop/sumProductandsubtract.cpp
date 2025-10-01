#include<iostream>
using namespace std;
int main(){
    int product=1;
    int sum=0;
    int n;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int ans=product-sum;
    cout<<ans<<endl;
    return 0;
} 