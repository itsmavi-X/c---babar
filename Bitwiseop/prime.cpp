#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; // No need to check further
            }
        }
    }

    if (isPrime) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
