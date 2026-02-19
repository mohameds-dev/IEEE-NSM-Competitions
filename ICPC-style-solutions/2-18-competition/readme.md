# Competition Problems (Feb 18th, 2026)



### Problem A

https://codeforces.com/contest/282/problem/A

Tags: `strings`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- Track a variable x starting at 0
- Parse each statement to find ++ or -- operation
- The middle character of each statement indicates the operation type
- Increment or decrement x accordingly

</details>

➡️ [Solution code](282A.cpp)




### Problem B

https://codeforces.com/contest/1253/problem/B

Tags: `implementation`, `simulation`, `greedy`

<details>
<summary>💡Expand for hints</summary>

- Track which employees are currently in the office
- A day ends when the office becomes empty (no employees present)
- Check for invalid states: duplicate check-ins, check-out without check-in, employee staying overnight
- Partition events into valid days greedily

</details>

➡️ [Solution code](1253B.cpp)


### Problem C

https://codeforces.com/contest/1692/problem/D

Tags: `strings`, `simulation`, `modular arithmetic`

<details>
<summary>💡Expand for hints</summary>

- Convert time string to minutes for easier arithmetic
- Add x minutes repeatedly, wrapping around at 24 hours (1440 minutes)
- Check if time string (without colon) is a palindrome
- Stop when you return to the initial time (cycle complete)

</details>

➡️ [Solution code](1692D.cpp)

### Problem D

https://codeforces.com/contest/1915/problem/A

Tags: `conditionals`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- Three values are given, two are equal, one is different
- Compare the three values to find which one is unique
- Use if-else statements to check all pairs

</details>

➡️ [Solution code](1915A.cpp)

### Problem E

https://codeforces.com/contest/482/problem/A

Tags: `greedy`, `constructive algorithms`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- Need exactly k distinct absolute differences between consecutive elements
- Alternate between picking from left and right ends to maximize unique differences
- After k elements, fill remaining in one direction to keep difference of 1

</details>

➡️ [Solution code](482A.cpp)