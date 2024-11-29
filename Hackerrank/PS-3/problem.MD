
A **for loop** is a programming construct that allows a block of code to be repeatedly executed based on a condition.  

### **Syntax of a `for` loop**
```cpp
for (expression_1; expression_2; expression_3) {
    // statement
}
```

- **`expression_1`**: Initializes variables, usually used for loop control.
- **`expression_2`**: Specifies the terminating condition. If it evaluates to `false`, the loop ends.
- **`expression_3`**: Updates the loop control variables.

### Example:
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}
```


## Problem Statement

You will use a `for` loop to iterate over a range of integers and perform the following:

1. If \( 1 \leq n \leq 9 \), print the English word representation of the number (e.g., "one" for 1, "two" for 2, etc.).
2. If \( n > 9 \):
   - Print **even** if `n` is an even number.
   - Print **odd** if `n` is an odd number.

---

## Input Format
You will be given two positive integers, `a` and `b` (\(a \leq b\)), separated by a newline.

---

## Output Format
For each integer `n` in the inclusive range `[a, b]`:
1. If \( 1 \leq n \leq 9 \), print the English representation of the number.
2. Otherwise:
   - Print **even** if `n` is even.
   - Print **odd** if `n` is odd.

---

## Constraints
- \( 1 \leq a \leq b \)

---

## Sample Input
```
8
11
```

---

## Sample Output
```
eight
nine
even
odd
```

