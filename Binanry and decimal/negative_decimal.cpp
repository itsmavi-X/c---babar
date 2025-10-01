#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=0;
    float ans=0;
    int r=1+(~n);
    while(r!=0){
        int digit=r&1;
        ans=(digit*pow(10,i))+ans;
        r=r>>1;
        i++;
    }
    cout<<ans;
}