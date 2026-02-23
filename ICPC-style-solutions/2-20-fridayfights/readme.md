## Competition Problems (Feb 20th, 2026)


### Problem A

https://codeforces.com/contest/1873/problem/A

Tags: `strings`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- The target string is `"abc"`
- Count how many positions differ between the given three-letter string and `"abc"`
- If the number of mismatches is at most 2, it is possible; otherwise, it is not

</details>

➡️ [Solution code](1873A.cpp)


### Problem B

https://codeforces.com/contest/617/problem/A

Tags: `math`, `greedy`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- You can move in steps of length 1 to 5, and you want to minimize the number of steps
- Use as many steps of length 5 as possible
- The answer is the integer division by 5 plus one more step if there is a non-zero remainder

</details>

➡️ [Solution code](617A.cpp)


### Problem C

https://codeforces.com/contest/118/problem/A

Tags: `strings`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- Convert all characters to lowercase first
- Consider vowels to be `a, o, y, e, u, i`
- For each character that is not a vowel, output a dot `.` followed by that consonant

</details>

➡️ [Solution code](118A.cpp)


### Problem D

https://codeforces.com/contest/1676/problem/B

Tags: `implementation`, `greedy`

<details>
<summary>💡Expand for hints</summary>

- Find the minimum value among all elements
- Each operation effectively reduces larger elements down to this minimum
- The answer is the sum of `(a[i] - min_value)` over all elements

</details>

➡️ [Solution code](1676B.cpp)


### Problem E

https://codeforces.com/contest/1676/problem/C

Tags: `strings`, `bruteforce`

<details>
<summary>💡Expand for hints</summary>

- You are given several strings of equal length
- For every pair of strings, compute the sum of absolute differences of ASCII values at each position
- Track and output the minimum such sum over all pairs

</details>

➡️ [Solution code](1676C.cpp)


### Problem F

https://codeforces.com/contest/1676/problem/D

Tags: `implementation`, `matrices`, `bruteforce`

<details>
<summary>💡Expand for hints</summary>

- For each cell, you need the sum of values on all four diagonals passing through it
- You can move along diagonals by changing row and column indices by \(\pm 1\) together
- A straightforward solution is to, for every cell, walk along its four diagonals and accumulate the sum, keeping the maximum over all cells

</details>

➡️ [Solution code](1676D.cpp)