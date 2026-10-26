#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> v;
    int n;
    cin >> n;
    int i;

    for (int x = 0; x < n; x++) {
        cin >> i;
        v.push_back (i);
    }

    int k = v[n - 1];

    for (int i = n - 2; i >= 0; i--)
        v[i + 1] = v[i];

    for (int x: v) 
    cout << x << "\t";
    return 0;
}