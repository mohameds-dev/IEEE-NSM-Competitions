#include <iostream>
#include <cmath>
using namespace std;

void run_case() {
    int n;
    cin >> n;

    long long sum = 0;

    // Read numbers and compute their sum
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        sum += value;
    }

    // Check if the sum is a perfect square
    long long root = sqrt(sum);

    if (root * root == sum)
        cout << "YES\n";
    else
        cout << "NO\n";
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
