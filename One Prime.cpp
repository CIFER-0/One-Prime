#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "Enter a number X: ";
    cin >> X;

    if (X <= 1) {
        cout << "Not prime" << endl;
    } else {
        bool isPrime = true;


        for (int i = 2; i * i <= X; i++) {
            if (X % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime==true) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }

    return 0;
}

