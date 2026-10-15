#include <iostream>
using namespace std;

int main () {
    int a;
    int b;
    int r;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    // if (b > a) swap(a, b);

    while (a % b > 0) {
        r = a % b;
        a = b;
        b = r;
    }

    cout << "GCD: " << r;

    return 0;
}