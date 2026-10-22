#include <iostream>
#include <vector>
using namespace std;

void p (int n) {
    for (int i = 1; i <= n; i++) {
        int c = 0;
        for (int j = 1; j < i * 2; j++) {
            if (j % 2 != 0) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}

int main () {
    int n;
    cin >> n;

    p (n);
    
    return 0;
}