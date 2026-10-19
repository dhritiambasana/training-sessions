#include <iostream>
using namespace std;

// long primeornot(long n) {
//     int c = 0;
//     if (n % 2 == 0) return (n == 2);
//     for (int i = 2; i <= n / i; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

long primeornot(long n) {
    int c = 0;
    if (n == 3 || n == 5) return true;
    if (n % 2 == 0) return (n == 2);
    
    if ((n / 6) * 6 + 1) return true; // (6i + 1)
    if ((n / 6) * 6 + 5) return true; // (6i + 5)
    return false;
}

int main () {
    int a;
    cin >> a;
    cout << primeornot(a);
    return 0;
}