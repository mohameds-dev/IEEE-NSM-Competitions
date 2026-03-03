#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll n, ans = LONG_LONG_MAX, MAX_BOUND = 1e9;

void solve(ll cur, int fours, int sevens){
    if (cur >= n){
        if (fours == sevens) {
            ans = min(cur, ans);
            return;
        }
    }

    if (cur < MAX_BOUND){
        solve(cur * 10 + 4, fours + 1, sevens);
        solve(cur * 10 + 7, fours, sevens + 1);
    }
}

int main() {
    cin >> n;
    solve(0, 0, 0);

    cout << ans << endl;
    return 0;
}
