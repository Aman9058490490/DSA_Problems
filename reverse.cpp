#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int n = abs(x); // Take absolute value to handle negative numbers
    int k;
    string str;

    if (x == INT_MIN) {
        return 0;  // INT_MIN can't be reversed without overflow
    }

    while (n != 0) {
        k = n % 10;   // Extract the last digit
        n = n / 10;   // Remove the last digit
        str = str + to_string(k); // Append digit to the result string
    }

    // Convert string to long to avoid overflow
    long reversed = stol(str);
    
    // Check for overflow or underflow based on INT range
    if (reversed > INT_MAX) {
        return 0; // Return 0 if overflow occurs
    }

    // If the original number was negative, return the reversed number with negative sign
    return x < 0 ? -static_cast<int>(reversed) : static_cast<int>(reversed);
}

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int revrs = reverse(x);
    cout << "Reverse of the number " << x << " is " << revrs << endl;
    return 0;
}
