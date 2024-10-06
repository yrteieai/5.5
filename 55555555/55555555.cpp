#include <iostream>
using namespace std;

int max_depth = 0;  // максимальна глибина рекурсії
int current_depth = 0;  // поточний рівень рекурсії

int binomial(int n, int k) {
    current_depth++;
    max_depth = max(max_depth, current_depth);

    cout << "Entering recursion level: " << current_depth << ", C(" << n << "," << k << ")" << endl;

    int result;
    if (k == 0 || k == n) {
        result = 1;
    }
    else {
        result = binomial(n - 1, k - 1) + binomial(n - 1, k);
    }

    cout << "Exiting recursion level: " << current_depth << ", result = " << result << endl;

    current_depth--;
    return result;
}


int fib(int n) {
    int result = 0;
    for (int k = 0; k <= n / 2; ++k) {
        result += binomial(n - k, k);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = fib(n);
    cout << "Fibonacci number F(" << n << ") = " << result << endl;
    cout << "Maximum recursion depth: " << max_depth << endl;

    return 0;
}

