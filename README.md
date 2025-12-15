# ex02 – Differences Between Pointers and References

This document explains the main differences between **pointers** and **references** in C++.

---

## 1. Initialization

A pointer can be initialized in different ways:

```c
int a = 10;
int *p = &a;
// OR
int *p;
p = &a;
```

A pointer can be declared and initialized either in a single step or in multiple lines.

### References

```c
int a = 10;
int &p = a; // Correct
```

However, the following is incorrect:

```c
int &p;
p = a; // Incorrect
```

References must be declared **and initialized in a single step**.

> **Note:** This behavior may vary depending on the compiler. The explanation above refers to the Turbo IDE.

---

## 2. Reassignment (Pointers)

Pointers can be reassigned, which makes them useful for implementing data structures such as linked lists and trees.

```c
int a = 5;
int b = 6;
int *p;

p = &a;
p = &b;
```

---

## 3. Reassignment (References)

References cannot be reassigned once initialized.

```c
int a = 5;
int b = 6;

int &p = a;
int &p = b; // Error: multiple declaration is not allowed
```

However, this is valid:

```c
int &q = p;
```

---

## 4. Memory Address

A pointer has its **own memory address and size** on the stack.  
A reference **shares the same memory address** as the original variable and occupies no additional memory.

```c
int &p = a;
cout << &p << endl << &a;
```

---

## 5. NULL Value

Pointers can be assigned `NULL`:

```c
int *p = NULL;
```

References **cannot** be `NULL`.

These constraints (no `NULL`, no reassignment) make references safer in many situations.

---

## 6. Indirection

Pointers support multiple levels of indirection.

### Pointers

```c
int a = 10;
int *p;
int **q; // Valid

p = &a;
q = &p;
```

### References

```c
int &p = a;
int &&q = p; // Error: reference to reference
```

References only provide **one level of indirection**.

---

## 7. Arithmetic Operations

Pointer arithmetic is allowed:

```c
p++;
p = p + 2;
```

There is no such thing as reference arithmetic.  
However, pointer arithmetic can be performed on the address of an object referred to by a reference:

```c
&obj + 5
```

---

## Summary

| Feature             | Pointer | Reference |
|--------------------|---------|-----------|
| Initialization     | Flexible | Must initialize at declaration |
| Reassignment       | Allowed | Not allowed |
| NULL value         | Allowed | Not allowed |
| Indirection levels | Multiple | Single |
| Arithmetic         | Allowed | Not allowed |
| Memory usage       | Own memory | Shares memory |

