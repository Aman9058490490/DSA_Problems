#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.size(); end++) {
        char currentChar = s[end];
        if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
            start = charIndex[currentChar] + 1;
        }
        charIndex[currentChar] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

// int lengthOfLongestSubstring(string s) {
//     int len = s.size();
//     vector<int> vc; // Stores lengths of substrings
//     int i = 0;

//     if (len == 0 || len == 1) return len; // Handle edge cases

//     while (i < len) {
//         vector<char> str; // Temporary vector to track characters in the current substring
//         str.push_back(s[i]);
//         int c = 1;

//         for (int j = i + 1; j <= len; j++) {
//             if (j == len) { // Reached the end of the string
//                 vc.push_back(c);
//                 i++;
//                 break;
//             } else if (s[j] == s[i]) { // Found a duplicate of the starting character
//                 vc.push_back(c);
//                 i = j;
//                 break;
//             } else { // Check if `s[j]` exists in `str`
//                 bool found = false;
//                 for (char ch : str) {
//                     if (ch == s[j]) {
//                         found = true;
//                         break;
//                     }
//                 }
//                 if (found) { // Stop the loop if a duplicate is found
//                     vc.push_back(c);
//                     i++;
//                     break;
//                 } else { // Add the character to the substring
//                     str.push_back(s[j]);
//                     c++;
//                 }
//             }
//         }
//     }

//     return *max_element(vc.begin(), vc.end());
// }

int main() {
    string s;
    cout << "Enter the string s: ";
    cin >> s;
    int len = lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << len << endl;
    return 0;
}
