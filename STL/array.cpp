#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> arr1 = {1,2,3,4,5};
    array<int,5> arr2 = {10,20,30,40,50};

    // Accessing elements
    cout << "First element of arr1: " << arr1.front() << endl;
    cout << "Last element of arr1: " << arr1.back() << endl;

    // Modifying elements
    arr1[0] = 100;
    cout << "Modified first element of arr1: " << arr1.front() << endl;

    // Size of the array
    cout << "Size of arr1: " << arr1.size() << endl;

    // Swapping arrays
    arr1.swap(arr2);
    cout << "First element of arr1 after swap: " << arr1.front() << endl;
    cout << "First element of arr2 after swap: " << arr2.front() << endl;

    return 0;
}