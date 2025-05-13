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
g++ -o prime_checker prime_checker.cpp
./prime_checker
