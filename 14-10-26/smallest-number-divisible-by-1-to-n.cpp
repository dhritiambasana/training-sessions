// smallest-number-divisible-by-1-to-n

#include <iostream>
using namespace std;

int gcd(long long a, int b)
{
    int r;
    while (a % b > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}

int main()
{
    int n = 6;
    long long a = 1;
    for (int i = 2; i <= n; i++)
    {
        if (gcd(a, i)) 
            a = (a * i) / gcd(a, i);
        cout << "(" << a << " * " << i << ") / gcd(" << a << ", " << i << ") \n";
    }
    cout << a << "\n";

    return 0;
}