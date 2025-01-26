#include <iostream>
#include <climits>
#include <string>
using namespace std;

int reverse(int x) {
    int n = x, k, count = 0, m = 0, total = 0, z = 0;
    string str;

    if (x == INT_MIN) {
        return 0;  // INT_MIN can't be reversed without overflow
    }

    if (x > 0) {
        while (n != 0) {
            k = n % 10;   // Extract the last digit
            n = n / 10;   // Remove the last digit
            if (m == count) {
                if (k == 0) {
                    count++;
                    m = count;
                } else {
                    count++;
                    str = str + to_string(k);
                }
            } else {
                str = str + to_string(k);
            }
        }
        // Convert string to long to avoid overflow
        long reversed = stol(str);
        if (reversed > INT_MAX) {
            return 0; // Return 0 if overflow occurs
        }
        return static_cast<int>(reversed);
    } else if (x == 0 || x < INT_MIN || x > INT_MAX) {
        return 0; // Return 0 for edge cases
    } else {
        x = -x;
        n = x;
        while (n != 0) {
            k = n % 10;   // Extract the last digit
            n = n / 10;   // Remove the last digit
            if (z == total) {
                if (k == 0) {
                    total++;
                    z = total;
                } else {
                    total++;
                    str = str + to_string(k);
                }
            } else {
                str = str + to_string(k);
            }
        }
        str = "-" + str;
        // Convert string to long to avoid overflow
        long reversed = stol(str);
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0; // Return 0 if overflow occurs
        }
        return static_cast<int>(reversed);
    }
}

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int revrs = reverse(x);
    cout << "Reverse of the number " << x << " is " << revrs << endl;
    return 0;
}
