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
