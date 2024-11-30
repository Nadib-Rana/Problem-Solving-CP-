### Problem: **B - Nearest Interesting Number**

Polycarp knows that if the sum of the digits of a number is divisible by 3, then the number itself is divisible by 3. Similarly, he assumes that numbers for which the sum of their digits is divisible by 4 are also somewhat interesting.

Polycarp considers a positive integer \( n \) *interesting* if the sum of its digits is divisible by 4. He wants to find the nearest interesting number \( n \) such that:
- \( n \geq a \)
- \( n \) is minimal.

Help Polycarp determine this number.

---

### Input:
The only line of input contains a single integer \( a \) \((1 \leq a \leq 1000)\), which is the starting number.

---

### Output:
Print the smallest interesting number \( n \) such that \( n \geq a \).

---

### Examples:

#### Input 1:
```
432
```
#### Output 1:
```
432
```

---

#### Input 2:
```
99
```
#### Output 2:
```
102
```

---

#### Input 3:
```
237
```
#### Output 3:
```
237
```

---

#### Input 4:
```
42
```
#### Output 4:
```
44
```

---


