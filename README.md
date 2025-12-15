# ex02 __ Differences Between Pointers and References

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
<br><br>


# ex03 __ Understanding `getType()` in C++ – Copy vs. Const Reference

This document explains the difference between two implementations of the `getType()` function for a `Weapon` class.

---

## 1. Example Class

```cpp
class Weapon {
private:
    std::string _type;

public:
    // Function declarations
    const std::string &getTypeRef() const;
    std::string getTypeCopy();
    void setType(const std::string &type);
};
```

---

## 2. Implementation Returning a Copy

```cpp
std::string Weapon::getTypeCopy() {
    return _type;
}
```

### Behavior:

1. Returns a **new `std::string` object** every time the function is called.
2. The caller receives a **copy** of `_type`.
3. Modifying the returned string **does not affect** the internal `_type`.
4. Slight **performance cost** because memory is allocated for the copy.
5. Safe to use, but less efficient for large strings or frequent calls.

### Example:

```cpp
Weapon w;
w.setType("Sword");

std::string type = w.getTypeCopy();
type = "Axe";  // _type inside Weapon is still "Sword"
```

---

## 3. Implementation Returning a Const Reference

```cpp
const std::string &Weapon::getTypeRef() const {
    return _type;
}
```

### Behavior:

1. Returns a **const reference** to the internal `_type`.
2. No copy is made → **more efficient**.
3. `const` ensures that the caller **cannot modify** `_type` through the reference.
4. Can be called on `const` objects of `Weapon`.
5. Perfect for functions where you just want to **read the value**.

### Example:

```cpp
const Weapon w;
std::cout << w.getTypeRef() << std::endl; // Allowed because function is const
```

> Attempting to modify the returned reference will cause a **compiler error**:

```cpp
w.getTypeRef() = "Axe"; // ❌ Error: cannot assign to const reference
```

---

## 4. Key Differences

| Feature                     | Returning Copy           | Returning Const Reference |
|------------------------------|------------------------|--------------------------|
| Memory / Performance         | New copy created       | No copy, more efficient  |
| Ability to modify returned value | Yes, does not affect original | No, const protects internal data |
| Can be used on `const` object | Only if returning copy  | Yes, because function is const |
| Typical use case             | Small or temporary strings | Large strings, read-only access |

---

## 5. Summary

- **Returning a copy** is safe but may be **slower** for large strings or frequent calls.
- **Returning a const reference** is **more efficient** and protects the internal state.
- In your `Weapon` class, since the description explicitly says:

> “`getType()` returns a **const reference** to the type string.”

The correct implementation is:

```cpp
const std::string &Weapon::getType() const {
    return _type;
}
```

This ensures efficiency, safety, and compliance with modern C++ best practices.
