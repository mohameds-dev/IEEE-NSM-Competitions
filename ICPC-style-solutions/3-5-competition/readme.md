## Competition Problems (March 5th, 2026)


### Problem A

https://codeforces.com/problemset/problem/1915/C

Tags: `binary search`

<details>
  <summary>💡Expand for hints  </summary>
  
  - First think about **how many 1×1 squares you have in total**
  - Add up all the numbers (a_1, a_2, \dots, a_n)
  - If you build one big square, the **total number of small squares must equal the area of that square**
  - Square areas are numbers like **1, 4, 9, 16, 25, ...**
  - So after computing the total, **check whether that number is a perfect square**

</details>

➡️ [Solution code] (UPDATE)


### Problem B

https://codeforces.com/contest/1525/problem/A

Tags: `math`, `number thoery`

<details>
  <summary>💡Expand for hints  </summary>
  
  - Let **e** be liters of essence and **w** be liters of water
  - The percentage condition means e/(e+w) * 100 = k
  - Rearrange it to get a ratio between **e** and **w**
  - This gives e : w = k : (100-k)
  - You want the **smallest integers** that keep this ratio
  - Reduce the ratio by dividing both numbers by **gcd(k, 100)**
  - The minimum steps is just **e + w** (since each liter poured is one step).


</details>

➡️ [Solution code] (UPDATE)

### Problem C

https://codeforces.com/problemset/problem/1873/B

Tags: `brute force`, `greedy`, `math`

<details>
  <summary>💡Expand for hints </summary>

  - You must add 1 to exactly one digit in the array
  - After choosing which digit to increase, compute the product of all digits
  - Think about which digit benefits the product the most when increased by 1
  - Notice that increasing a smaller digit changes the product more than increasing a large digit
  - Try thinking about what happens if you increase: 0 → 1, 1 → 2, a large digit like 8 → 9
  - A helpful idea: sort the digits or focus on the smallest digit
  - Usually, increasing the smallest digit by 1 gives the largest final product
  
</details>

➡️ [Solution code] (UPDATE)

### Problem D

https://codeforces.com/problemset/problem/1850/C

Tags: `strings`, `implementation`

<details>
  <summary>💡Expand for hints</summary>

  - The word appears **in exactly one column**
  - The letters are **continuous vertically** (no dots between them)
  - Scan the grid **column by column**
  - For each column:
    - Look from **top to bottom**
    - Collect the characters that are **letters (not `.`)**

</details>

➡️ [Solution code] (UPDATE)


### Problem E

https://codeforces.com/contest/22/problem/B

Tags: `brute force`, `dp`

<details>
   <summary>💡Expand for hints</summary>

  * The table must be a **rectangle aligned with the grid**

  * Every cell inside the rectangle must be **free (`0`)**
  
  * So the task is to find a **rectangle made only of `0`s**
  
  * For every possible rectangle:
  
    * check if **all cells inside it are `0`**
    * compute its **perimeter**
  
  * The perimeter of a rectangle with height `h` and width `w` is 2 * (h + w)
  * Keep track of the **maximum perimeter** among all valid rectangles
  
  * Since **n, m ≤ 25**, you can safely **try many rectangles** and check them.

</details>

➡️ [Solution code] (UPDATE)
