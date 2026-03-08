#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void run_case() {
    int n;
    cin >> n;

    vector<int> v(n);
    int zeroCount = 0;

    // Read numbers and count zeros
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0)
            zeroCount++;
    }

    // If more than one zero, product will always be 0
    if (zeroCount > 1) {
        cout << 0 << "\n";
        return;
    }

    // Sort numbers
    sort(v.begin(), v.end());

    // Increase the smallest number by 1
    v[0]++;

    // Compute product
    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= v[i];
    }

    cout << product << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        run_case();
    }

    return 0;
}
