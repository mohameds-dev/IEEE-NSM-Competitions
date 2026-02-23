#include <bits/stdc++.h>


using namespace std;


string words[51];

int strings_cost(string &s1, string &s2) {
    int sum = 0;
    for (int i = 0; i < s1.size(); ++i)
        sum += abs(s1[i] - s2[i]); // absolute difference between ASCII values

    return sum;
}


int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int min_cost = INT_MAX;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                min_cost = min(min_cost, strings_cost(words[i], words[j]));
            }
        }

        cout << min_cost << endl;


        // a more optimized approach is to sort the array of strings
        // then only calculate the cost of each two consecutive strings (words[i] and words[i + 1])
    }
    return 0;
}
