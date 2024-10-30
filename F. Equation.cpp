#include <iostream>
using namespace std;

// Function to calculate X raised to the power of n
int power(int X, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= X;
    }
    return result;
}

// Function to calculate the sum S as described
int calculateSum(int X, int N) {
    int S = 0;  // Initialize S to 0 for (X^0 - 1), which is 0 in this context
    for (int i = 0; i <= N; i += 2) {  // Start with i = 0 to include X^0
        if (i == 0) {
            S += (power(X, i) - 1);  // Add (X^0 - 1) only for the first term
        } else {
            S += power(X, i);  // Add X^2, X^4, ..., X^N
        }
    }
    return S;
}

int main() {
    int X, N;
    cin >> X >> N;

    int result = calculateSum(X, N);
    cout << result << endl;

    return 0;
}
