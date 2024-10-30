#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int N)
{
    if (N <= 1) return false;
    if (N <= 3) return true;
    if (N % 2 == 0 || N % 3 == 0 ) return false;

    //check for factor from 5 to sqrt(N), skipping even numbers;
    for( int i = 5; i * i <= N; i+= 6) {
        if ( N % i == 0 || N % ( i + 2) == 0) {
            return false;
        }
    }
    return true;
}


int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if(isPrime(N)) {
            cout << "YES" <<endl;
        }
        else {
            cout << "NO" <<endl;
        }
    }

    return 0;
}
