#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cout << "enter elements: " << "\n";
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > max) 
            max = a[i];
    }
    cout << "max element: " << max;
    return 0;
}