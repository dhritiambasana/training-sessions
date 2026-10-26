#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> &v) {
    for (int x: v) 
        cout << x << "\t";
}

void k_rotate (vector<int> &v, int n, int k) {
    while (k) {
        int a = v[n - 1];
        for (int i = n - 2; i >= 0; i--) 
            v[i + 1] = v[i];
        v[0] = a;
        k--;
    }
    print (v);
} 

int main () {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back (a);
    }
    cout << "\n";

    int k;
    cin >> k;

    // k = (k > n) ? (k % n) : k;

    k_rotate (v, n, (k % n));
    return 0;
}