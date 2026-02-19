#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;

        long long sum = 1ll * (n) * (n + 1) / 2;

        int p2 = 1;
        long long sum_p2 = 0;
        while (p2 <= n) {
            sum_p2 += p2;
            p2 *= 2;
        }
        cout << sum - sum_p2 * 2 << endl;
    }

}
