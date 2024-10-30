#include <iostream>
using namespace std;

// Function to print character C N times, separated by spaces
void printCharacterNTimes(int N, char C) {
    for (int i = 0; i < N; i++) {
        cout << C;
        if (i < N - 1) cout << " ";  // Add space between characters, but not after the last one
    }
    cout << endl;  // Move to the next line after printing N characters
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        char C;
        cin >> N >> C;

        // Call the function to print the character N times
        printCharacterNTimes(N, C);
    }

    return 0;
}

