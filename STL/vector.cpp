#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //checking vector capacity at starting
    cout<<"capacity->"<<v.capacity()<<endl;
    //adding elements to vector
    v.push_back(10);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;
    cout<<"Element at index 0->"<<v.at(0)<<endl;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Element at index 2->"<<v.at(2)<<endl;
    cout<<"Front elemnt->"<<v.front()<<endl;;
    cout<<"Back element->"<<v.back()<<endl;
    //removing element from vector  
    v.pop_back();
    cout<<"After pop_back()"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    // beginning and end
    cout<<endl;
    cout<<"begin()->"<<*v.begin()<<endl;
    cout<<"end()->"<<*(v.end()-1)<<endl;
    //clear the vector
    v.clear();
    cout<<"After clear(), size->"<<v.size()<<endl;


    // making a vector of fixed size with all elemenst 1
    vector<int> a(5,1);
    cout<<"Printing vector a"<<endl;
    for(int i:a){
        cout<<i<<" ";
        
    }
    cout<<endl;

    // copying a vector to another vector
    vector<int> a2_copy_vector(a);
    for(int i:a2_copy_vector){
        cout<<i<<" ";
    }
}
