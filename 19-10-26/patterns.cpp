#include <iostream>
#include <vector>
using namespace std;

void p (int n) {
    for (int i = 1; i < n * 2; i++) {
        for (int j = 1; j <= min(i, n); j++) {
            // if (j > n) {
            //     cout << " ";                
            // }
            if (i > n && j <= (i % n)) cout << "  ";
            else cout << j << " ";
        }
        cout << "\n";
    }
}

void pascals (int n) {
    vector<int> v(1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            
        }
    }
}

int main () {
    int n;
    cin >> n;

    p(n);
    
    return 0;
}