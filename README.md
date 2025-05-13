# 🔍 Prime Number Checker (Efficient up to 9-Digit Numbers)

A high-performance C++ program that determines whether a number is **prime or composite** using an optimized **trial division** method.

It combines simplicity with mathematical logic (√n + 6k ± 1 optimization) to verify even **very large prime numbers** like `982,451,653` in milliseconds.

---

## 🧠 How It Works

### ✔ Step-by-step Logic:

1. **Initial Checks**:
   - Numbers ≤ 1 are **neither prime nor composite**.
   - Checks for divisibility by 2 and 3 are done early (most common composites).

2. **Square Root Optimization**:
   - A number `n` can’t be composite if **no factor ≤ √n** divides it.
   - So we only check factors **up to sqrt(n)** to save time.

3. **6k ± 1 Rule**:
   - All primes > 3 can be written as `6k ± 1`.
   - This removes all multiples of 2 and 3 from the loop, reducing the number of checks drastically.

---

## ⚙️ Prerequisites

| Platform      | Requirements                 |
|---------------|------------------------------|
| **Windows/Linux/macOS** | A C++ compiler (e.g. `g++`, `clang++`) |
| **Memory**     | Less than 1 MB               |
| **Input size** | Up to 2,147,483,647 (int)    |

---

## 🚀 How to Compile and Run

### ✅ Using Terminal:

```bash
g++ -o prime_or_composite prime_or_composite.cpp
./prime_or_composite
```

### ⚠️ Warnings & Known Issues

| ⚠️ Issue             | 💬 Description                                                                 |
|----------------------|---------------------------------------------------------------------------------|
| `int` Overflow        | The program uses `int`, which supports numbers only up to **2,147,483,647**. Use `long long` for larger inputs. |
| No input error checks | Entering non-integer or invalid inputs may crash or behave unexpectedly.       |
| Trial Division Scalability | For very large numbers (100+ digits), trial division becomes too slow. Use probabilistic methods like Miller-Rabin instead. |


### 👨‍💻 Author & Background

This code was developed due to a simple school assignment!
The implementation succeeded in validating prime numbers up to nearly 1 billion, proving the strength of simple algorithms when properly optimized.


