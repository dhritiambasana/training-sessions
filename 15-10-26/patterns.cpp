#include <iostream>
using namespace std;

void right (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
}

void upside_down_right (int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--)
            cout << "* ";
        cout << "\n";
    }
}

void left (int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--)
            cout << "  ";
        for (int k = i; k <= n; k++)
            cout << "* ";
        cout << "\n";
    }
}

void symmetric (int n) {
    int a = 1;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--)
            cout << "  ";
        for (int k = i; k <= n; k++)
            cout << "* ";
        for (int l = 1; l < a; l++)
            cout << "* ";
        a++;
        cout << "\n";
    }
}

void balanced (int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--)
            cout << " ";
        for (int k = i; k <= n; k++)
            cout << "* ";
        cout << "\n";
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << " ";
        for (int k = n; k >= i; k--)
            cout << "* ";
        cout << "\n";
    }
}

int main () {
    int n;
    cin >> n;

    balanced(n);
    
    return 0;
}