#include <bits/stdc++.h>


using namespace std;

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        cin >> n;

        int arr[51], min_value = INT_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            min_value = min(min_value, arr[i]);
        }

        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i] - min_value;
        }
        cout << sum << endl;
    }
    return 0;
}
