
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

### Explanation
1. For `n = 8`: It corresponds to "eight".
2. For `n = 9`: It corresponds to "nine".
3. For `n = 10`: It is greater than `9` and even, so "even" is printed.
4. For `n = 11`: It is greater than `9` and odd, so "odd" is printed.

---

## Solution Code in C++

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // Input two integers a and b

    for (int n = a; n <= b; n++) { // Iterate over the range [a, b]
        if (n >= 1 && n <= 9) {
            // Print the English word representation
            if (n == 1) cout << "one" << endl;
            else if (n == 2) cout << "two" << endl;
            else if (n == 3) cout << "three" << endl;
            else if (n == 4) cout << "four" << endl;
            else if (n == 5) cout << "five" << endl;
            else if (n == 6) cout << "six" << endl;
            else if (n == 7) cout << "seven" << endl;
            else if (n == 8) cout << "eight" << endl;
            else if (n == 9) cout << "nine" << endl;
        } else {
            // Check if n is even or odd
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
```

---

## Explanation of the Code

1. **Input**:
   - Read two integers `a` and `b`.

2. **Iteration**:
   - Use a `for` loop to iterate from `a` to `b` inclusive.

3. **Condition Check**:
   - For \( 1 \leq n \leq 9 \), print the corresponding word.
   - For \( n > 9 \):
     - Use `n % 2 == 0` to check if `n` is even.
     - Otherwise, it is odd.

4. **Output**:
   - Each result is printed on a new line.

---

## Test Cases

### Input:
```
5
12
```

### Output:
```
five
six
seven
eight
nine
even
odd
even
```

### Input:
```
10
15
```

### Output:
```
even
odd
even
odd
even
odd
```
```
