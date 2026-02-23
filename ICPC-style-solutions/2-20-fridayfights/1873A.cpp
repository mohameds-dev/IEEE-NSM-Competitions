#include <bits/stdc++.h>


using namespace std;

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        char a, b, c;
        cin >> a >> b >> c;
        int ctr = (a != 'a') + (b != 'b') + (c != 'c');
        if (ctr <= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
