#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> &v) {
    for (int x: v) 
        cout << x << "\t";
}

void backup_rotation (vector<int> &v, int n, int k) {
    vector<int> b;
    for (int i = n - k; i < n; i++) 
        b.push_back(v[i]);

    for (int i = n - k - 1; i >= 0; i--)
        v[i + k] = v[i];

    for (int i = 0; i < k; i++) 
        v[i] = b[i];

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

    backup_rotation (v, n, (k % n));
    return 0;
}