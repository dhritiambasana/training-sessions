#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int sum = 0;
    int count = 0;
        
    for (int num = 1; num <= 10; num++) {
        for (int i = 1; i <= floor(sqrt(num)); i++) {
            if (num % i == 0) 
                sum += i + (num / i);
        }
        sum -= num;
        if (sum == num)
            count++;
    }
    cout << count << "\n";
    return 0;
}