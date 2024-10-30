#include <bits/stdc++.h>
using namespace std;

//Function to check if a binary string is a palindrome
bool isPalindrome (const string& binary) {
    int left = 0;
    int right = binary.size() - 1;
    while( left < right) {
        if( binary[left] != binary[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to check if a number is wonder
bool isWonderful(int N) {
    //check if N is odd
    if( N % 2 == 0) return false;

    // convert N to binary
    string binary = "";
    int num = N;
    while ( num > 0)
    {
        binary = ( num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    // check if the binary representation is a palindrome
    return isPalindrome(binary);
}


int main()
{
    int N;
    cin >> N;

    // output result based on the isWonderful function
    if(isWonderful(N)) {
        cout << "YES" <<endl;
    }
    else {
        cout << "NO" <<endl;
    }

    return 0;
}
