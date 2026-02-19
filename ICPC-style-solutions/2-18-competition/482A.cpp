#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

bool used[N];

int main() {
    int n, k;
    cin >> n >> k;

    int left = 0, right = n - 1;

    // build the first k elements by alternating ends to introduce new unique differences
    for (int i = 0; i < k; i++) {
        int value;
        if (i % 2 == 0) {
            value = left++;
        } else {
            value = right--;
        }

        used[value] = true;
        cout << value + 1 << " ";
    }

    // print remaining numbers in one direction, keeping the difference 1
    if (k % 2 == 1) {
        // last pick was from left --> continue left to right
        for (int i = left; i <= right; i++) {
            cout << i + 1 << " ";
        }
    } else {
        // last pick was from right --> continue right to left
        for (int i = right; i >= left; i--) {
            cout << i + 1 << " ";
        }
    }

    cout << "\n";
    return 0;
}
