
# Understanding `if`, `if-else`, and `if-else if-else` in C/C++

## Overview
`if` and `else` are two of the most frequently used conditionals in C/C++. They enable you to execute one conditional statement among many dependent conditional statements.

### **1. `if` Statement**
This executes the body of bracketed code starting with **statement1** if the **condition** evaluates to true.

```cpp
if (condition) {
    statement1;
}
```

### **2. `if-else` Statement**
This executes the body of bracketed code starting with **statement1** if the **condition** evaluates to true. Otherwise, it executes the body of code starting with **statement2**.

```cpp
if (condition) {
    statement1;
} else {
    statement2;
}
```

### **3. `if-else if-else` Statement**
In this structure, dependent statements are chained together, and the condition for each statement is checked only if all prior conditions in the chain evaluated to false.  
- Once a condition evaluates to true, the associated code block is executed, and the program skips to the end of the chain.
- If all conditions evaluate to false, the body of the `else` block is executed.

```cpp
if (first_condition) {
    // Code block
} else if (second_condition) {
    // Code block
} else if (nth_condition) {
    // Code block
} else {
    // Code block
}
```


## Problem Statement

Given a positive integer `n`, perform the following:

1. If `1 ≤ n ≤ 9`, print the lowercase English word corresponding to the number (e.g., "one" for 1, "two" for 2, etc.).
2. If `n > 9`, print **Greater than 9**.

### **Input Format**
A single integer, `n`.

### **Constraints**
- \( 1 \leq n \)

### **Output Format**
- If \( 1 \leq n \leq 9 \), print the lowercase English word corresponding to the number (e.g., "one" for 1, "two" for 2, etc.).
- Otherwise, print **Greater than 9**.

---

## Sample Inputs and Outputs

### Sample Input 0
```
5
```

### Sample Output 0
```
five
```

**Explanation:**  
The number `5` corresponds to the English word "five".

---

### Sample Input 1
```
8
```

### Sample Output 1
```
eight
```

**Explanation:**  
The number `8` corresponds to the English word "eight".

---

### Sample Input 2
```
44
```

### Sample Output 2
```
Greater than 9
```

**Explanation:**  
The number `44` is greater than `9`, so we print **Greater than 9**.

---
