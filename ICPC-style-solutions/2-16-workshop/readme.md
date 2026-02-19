# Workshop Problems (Feb 16th, 2026)


### Problem A

https://codeforces.com/contest/112/problem/A

Tags: `strings`, `string conversions & comparison`

<details>
<summary>💡Expand for hints</summary>

- In lexicographical comparisons, we compare characters one by one. 
- Letter case matters in lexicographical comparisons, but in this problem it should not
- We'll need to make the letter case match, and then make the comparison
- Comparisons using `>`,`<>`,`==` in `C++` or `Python` work on strings.


</details>

➡️ [Solution code](112A.cpp)



### Problem B

https://codeforces.com/contest/208/problem/A

Tags: `strings`, `conditionals`, `loops`

<details>
<summary>💡Expand for hints</summary>

- Check for occurrences of "WUB" --> At `s[i] == 'W'` you can check `s[i+1] == 'U'` and `s[i+2] == 'B`
- Track whether you're currently building a word to insert spaces correctly

</details>

➡️ [Solution code](208A.cpp)

### Problem C

https://codeforces.com/problemset/problem/598/A 

Tags: `sums`, `logs`, `runtime optimization`

<details>
<summary>💡Expand for hints</summary>

- Calculate sum of all integers from 1 to n using formula n*(n+1)/2
- Identify all powers of two up to n (1, 2, 4, 8, ...)
- Use a loop to find powers of two efficiently (start at 1 and multiply by 2 each iteration)
- Subtract twice the sum of powers of two from the total sum

</details>

➡️ [Solution code](598A.cpp)


### Problem D

https://codeforces.com/contest/746/problem/B 

Tags: `implementation`, `double ended queues` or `mid-list insertions`

<details>
<summary>💡Expand for hints</summary>

- Reverse the encoding process: work backwards from the encoded string
- Take characters from the end of encoded string and insert them in the middle of decoded string
- The median position is at size/2 (left of two middle positions for even length)
- Use a vector or deque to efficiently insert at middle positions

</details>

➡️ [Solution code](746B.cpp)

