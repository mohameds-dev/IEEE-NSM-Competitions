## Workshop Problems (Mar 3rd, 2026)


### Problem A

https://codeforces.com/contest/1873/problem/A

Tags: `strings`, `conditionals`

<details>
<summary>💡Expand for hints</summary>

- You are given a string of length 3 and want to know if it can be turned into `"abc"` by changing at most two characters  
- Think in terms of **positions**: compare each character with the corresponding character in `"abc"`  
- Count how many positions are different and decide based on that count  

</details>

➡️ [Solution code](1873A.cpp)


### Problem B

https://codeforces.com/contest/617/problem/A

Tags: `math`, `greedy`, `implementation`

<details>
<summary>💡Expand for hints</summary>

- You need the **minimum number of moves** to reach a point on a line using steps of size 1–5  
- Always try to use as many steps of size **5** as possible first  
- Use division and remainder to get the answer in \(O(1)\) time  

</details>

➡️ [Solution code](617A.cpp)


### Problem C

https://codeforces.com/contest/1475/problem/A

Tags: `math`, `number theory`, `binary representation`

<details>
<summary>💡Expand for hints</summary>

- The task is to decide if a given number can be written as an **odd** number times a power of two greater than 1  
- Repeatedly divide by 2 while the number is even and see what remains  
- After removing all factors of 2, check if the remaining number is greater than 1  

</details>

➡️ [Solution code](1475.cpp)


### Problem D

https://codeforces.com/contest/96/problem/B

Tags: `recursion`, `bruteforce`, `constructive algorithms`

<details>
<summary>💡Expand for hints</summary>

- You are looking for the **smallest “lucky number”** (only digits 4 and 7) that is at least \(n\) and has **equal counts of 4s and 7s**  
- Think of generating lucky numbers recursively by appending `4` or `7`  
- While generating, keep track of how many 4s and 7s you have added and update the best valid answer  

</details>

➡️ [Solution code](96B.cpp)
