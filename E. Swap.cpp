#include <bits/stdc++.h>
using namespace std;


//Function to swap two numbers by reference
void swapNumbers( int &X, int &Y) {
    int temp = X;
    X = Y;
    Y = temp;
}

int main()
{
    int X, Y;
    cin >> X >> Y;

    // call the swap function
    swapNumbers(X, Y);

    // print the swapped values
    cout << X << " " << Y <<endl;


    return 0;
}
