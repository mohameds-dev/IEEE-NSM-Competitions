#include <bits/stdc++.h>
using namespace std;

int main() {

    // ---------------- GCD / LCM ----------------
    int a = 12, b = 18;
    int g = __gcd(a, b);      // g = 6
    int l = lcm(a, b);        // l = 36 (C++17+)

    // ---------------- ABSOLUTE VALUE ----------------
    int x = -5;
    int y = abs(x);            // y = 5
    double xd = -3.14;
    double yd = fabs(xd);      // yd = 3.14

    // ---------------- POWER / SQUARE ROOT ----------------
    double p = pow(2, 3);      // 2^3 = 8
    double r = sqrt(16);       // square root = 4

    // ---------------- CEIL / FLOOR ----------------
    double a1 = 3.2, b1 = -3.2;
    double c1 = ceil(a1);      // 4.0 → smallest integer ≥ 3.2
    double c2 = ceil(b1);      // -3.0 → smallest integer ≥ -3.2
    double f1 = floor(a1);     // 3.0 → largest integer ≤ 3.2
    double f2 = floor(b1);     // -4.0 → largest integer ≤ -3.2

    // ---------------- ROUND / TRUNC ----------------
    double r1 = round(a1);     // 3.0
    double t1 = trunc(a1);     // 3.0

    // ---------------- MODULAR ARITHMETIC ----------------
    const int MOD = 1e9 + 7;
    int sum = (a + b) % MOD;                     // modular addition
    int diff = (a - b + MOD) % MOD;             // modular subtraction
    int prod = (1LL * a * b) % MOD;             // modular multiplication

    // ---------------- FAST EXPONENTIATION (MOD) ----------------
    auto modPow = [](long long a, long long b, long long mod) -> long long {
        long long res = 1;
        while(b) {
            if(b & 1) res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    };
    long long fp = modPow(2, 10, MOD); // 2^10 % MOD

    return 0;
}
