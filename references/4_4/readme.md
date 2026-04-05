# Syntax Guide 💡

<details>
  <summary>Loops</summary>

  ```cpp
  for (int i = 0; i < n; i++) { ... }         // standard loop
for (int i = n-1; i >= 0; i--) { ... }     // reverse loop
for (auto &x : v) { ... }                   // range-based loop (vectors, arrays)
```
</details>
<details>
  <summary>Built in Vector Functions</summary>
  
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // empty() → returns true if vector has no elements
    bool isEmpty = v.empty();

    // push_back() → adds element to the end
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);

    // emplace_back() → constructs element in-place at the end
    v.emplace_back(2);

    // sort(begin, end) → sorts elements in ascending order
    sort(v.begin(), v.end());

    // insert(iterator, value) → inserts value at given position
    v.insert(v.begin() + 1, 10);

    // erase(iterator) → removes element at given position
    v.erase(v.begin() + 2);

    // pop_back() → removes last element
    v.pop_back();

    // accumulate(begin, end, initial) → sum of elements + initial value
    int sum = accumulate(v.begin(), v.end(), 0);

    // count(begin, end, value) → counts occurrences of value
    int count10 = count(v.begin(), v.end(), 10);

    // partial_sum(begin, end, output_begin) → prefix sums
    vector<int> prefix(v.size());
    partial_sum(v.begin(), v.end(), prefix.begin());

    // any_of → true if any element satisfies condition
    bool anyGreaterThan5 = any_of(v.begin(), v.end(),
        [](int x) { return x > 5; });

    // all_of → true if all elements satisfy condition
    bool allPositive = all_of(v.begin(), v.end(),
        [](int x) { return x > 0; });

    // none_of → true if no elements satisfy condition
    bool noneNegative = none_of(v.begin(), v.end(),
        [](int x) { return x < 0; });

    // lower_bound → first element >= value (vector must be sorted)
    auto lb = lower_bound(v.begin(), v.end(), 3);

    // upper_bound → first element > value (vector must be sorted)
    auto ub = upper_bound(v.begin(), v.end(), 3);

    // begin() → iterator to first element
    // end() → iterator to one past last element
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        int value = *it; // access element via iterator
    }

    return 0;
}
```
</details>

<details>
  <summary> Binary Search</summary>

  ```cpp
sort(v.begin(), v.end());
auto lb = lower_bound(v.begin(), v.end(), x); // first >= x
auto ub = upper_bound(v.begin(), v.end(), x); // first > x
int count = ub - lb; // occurrences of x
```

</details>

<details>
<summary>Bitwise Operations</summary>
  
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 5;   // 0101
    int b = 3;   // 0011

    // ---------------- BASIC BITWISE OPERATORS ----------------

    // AND (&) → 1 if both bits are 1
    int and_result = a & b;   // 0001 (1)

    // OR (|) → 1 if at least one bit is 1
    int or_result = a | b;    // 0111 (7)

    // XOR (^) → 1 if bits are different
    int xor_result = a ^ b;   // 0110 (6)

    // NOT (~) → flips all bits (2's complement representation)
    int not_a = ~a;

    // LEFT SHIFT (<<) → shifts bits left (multiplies by 2^n)
    int left_shift = a << 1;  // 1010 (10)

    // RIGHT SHIFT (>>) → shifts bits right (divides by 2^n)
    int right_shift = a >> 1; // 0010 (2)

    // ---------------- COMMON BIT TRICKS ----------------

    int x = 10; // 1010

    // Check if i-th bit is set (0-indexed)
    int i = 1;
    bool isSet = (x & (1 << i)) != 0;

    // Set i-th bit
    x = x | (1 << i);

    // Clear i-th bit
    x = x & ~(1 << i);

    // Toggle i-th bit
    x = x ^ (1 << i);

    // Remove lowest set bit
    x = x & (x - 1);

    // Get lowest set bit (rightmost 1)
    int lowestBit = x & (-x);

    // Check if number is power of 2
    bool isPowerOf2 = (x > 0) && ((x & (x - 1)) == 0);

    // Count number of set bits (1s)
    int setBits = __builtin_popcount(x);

    // Count leading zeros
    int leadingZeros = __builtin_clz(x);

    // Count trailing zeros
    int trailingZeros = __builtin_ctz(x);

    // ---------------- SWAPPING USING XOR ----------------

    int p = 4, q = 7;

    p = p ^ q;
    q = q ^ p;
    p = p ^ q;
    // values of p and q are swapped without temp variable

    return 0;
}
```

</details>

<details>
  <summary>Counting Character Frequencies in Strings</summary>

  ```cpp
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
  ```

</details>

<details>
  <summary> Navigating to Neighbouring Cells in a 2D Array</summary>
  
  ```cpp
  #include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 4, m = 5;  // dimensions of the grid
    int grid[n][m];           // 2D array

    // initialize grid with zeros
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            grid[i][j] = 0;

    // ---------------- DIRECTIONS ----------------
    // 4-directional (Up, Right, Down, Left)
    int dx4[] = {-1, 0, 1, 0};
    int dy4[] = {0, 1, 0, -1};

    // 8-directional (includes diagonals)
    int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    // ---------------- ITERATE OVER NEIGHBORS ----------------
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Example: 4-directional neighbors
            for (int dir = 0; dir < 4; dir++) {
                int ni = i + dx4[dir]; // neighbor row
                int nj = j + dy4[dir]; // neighbor col

                // check bounds
                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    int neighbor_value = grid[ni][nj];
                    // process neighbor_value as needed
                }
            }

            // Example: 8-directional neighbors
            for (int dir = 0; dir < 8; dir++) {
                int ni = i + dx8[dir];
                int nj = j + dy8[dir];

                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    int neighbor_value = grid[ni][nj];
                    // process neighbor_value as needed
                }
            }
        }
    }

    return 0;
}
  ```
</details>

<details>
<summary>Math Utilities</summary>

```cpp
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
```

</details>
