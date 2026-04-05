#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "example string";

    // ---------------- USING ARRAY (only for lowercase letters a-z) ----------------
    int freq[26] = {0};  // initialize all counts to 0

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;  // increment count for this letter
        }
    }
    // freq[0] = count of 'a', freq[1] = count of 'b', etc.

    // ---------------- USING UNORDERED_MAP (handles all characters) ----------------
    unordered_map<char, int> freqMap;

    for (char c : s) {
        freqMap[c]++;  // automatically initializes missing keys to 0
    }
    // freqMap['e'] = count of 'e', freqMap[' '] = count of spaces, etc.

    // ---------------- USING MAP (sorted by character) ----------------
    map<char, int> sortedFreq;

    for (char c : s) {
        sortedFreq[c]++;
    }
    // sortedFreq maintains characters in ascending order

    // ---------------- EXAMPLES OF ACCESS ----------------
    int count_e = freqMap['e'];      // frequency of 'e'
    int count_space = freqMap[' '];  // frequency of space

    return 0;
}
