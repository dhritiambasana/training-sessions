#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> &v) {
    for (int x: v) 
        cout << x << "\t";
}

void rev (vector<int> &v, int n) {
    int b = n - 1;
    for (int i = 0; i < n/2; i++) {
        swap(v[i], v[b]);
        b--;
    }
    print(v);
}

int main () {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    rev (v, n);

    return 0;
}