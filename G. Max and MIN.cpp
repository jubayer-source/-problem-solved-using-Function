
#include <iostream>
#include <vector>
using namespace std;

// Function to find the minimum and maximum values in the array
void findMinAndMax(const vector<int>& arr, int &minValue, int &maxValue) {
    minValue = arr[0];
    maxValue = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int minValue, maxValue;
    findMinAndMax(A, minValue, maxValue);

    cout << minValue << " " << maxValue << endl;

    return 0;
}
