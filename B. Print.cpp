#include <bits/stdc++.h>
using namespace std;

void printNumbers(int N) {
    for( int i = 1; i <= N; i++) {
        cout << i;
        if( i <N ) cout << " ";
    }


}

int main()
{
    int N;
    cin >> N;

    //call the function to print numbers from 1 to N;
    printNumbers(N);

    return 0;
}
