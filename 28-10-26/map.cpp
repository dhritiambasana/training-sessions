#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void print_m (unordered_map<int, int> &m) {
    for (auto& [x, y] : m)
        cout << x << ": " << y << "\n";
}

void find_mode (int n, unordered_map<int, int> &m, vector<int> &v) {
    for (int i = 0; i < n; i++)
        m[v[i]]++;

    print_m (m);
}

int main () {
    int n;
    cin >> n;
    cout << "\n";

    unordered_map<int, int> m;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    find_mode (n, m, v);

    return 0;
}