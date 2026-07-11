# 🔍 Exponential Search in C++

Exponential Search is an efficient searching algorithm used on **sorted arrays**. Instead of searching the entire array, it first finds a small range where the target may exist by **doubling the search index**, and then performs **Binary Search** within that range.

---

## 📌 Problem Statement

Given a **sorted array** and a target element, return its index if it exists; otherwise return `-1`.

---

## 💡 Approach

The algorithm works in two phases:

1. **Find the Search Range**
   - Start from index `1`.
   - Keep doubling the index (`1 → 2 → 4 → 8 → ...`) until:
     - The current element becomes greater than the target, or
     - The index goes out of bounds.

2. **Apply Binary Search**
   - The target can only exist between:
     ```
     i/2
     ```
     and
     ```
     min(i, n-1)
     ```
   - Perform Binary Search on this smaller range.

---

## 🧠 Intuition

Instead of searching the entire array using Binary Search, we first **quickly narrow down the possible search interval**.

Since the index doubles every iteration, the correct range is found in logarithmic time.

---

# 📖 Example

### Input

```text
Array  = [3,4,5,6,11,13,14,15,56,70]
Target = 13
```

---

## Step 1

Start from index **1**

```text
Index : 0 1 2 3 4 5 6 7 8 9
Value : 3 4 5 6 11 13 14 15 56 70
          ↑
          i = 1
```

Since

```
4 ≤ 13
```

Double the index.

---

## Step 2

```text
Index : 0 1 2 3 4 5 6 7 8 9
Value : 3 4 5 6 11 13 14 15 56 70
            ↑
            i = 2
```

Since

```
5 ≤ 13
```

Double again.

---

## Step 3

```text
Index : 0 1 2 3 4 5 6 7 8 9
Value : 3 4 5 6 11 13 14 15 56 70
                ↑
                i = 4
```

Since

```
11 ≤ 13
```

Double again.

---

## Step 4

```text
Index : 0 1 2 3 4 5 6 7 8 9
Value : 3 4 5 6 11 13 14 15 56 70
                        ↑
                        i = 8
```

Now

```
56 > 13
```

Stop expanding.

---

# 🎯 Candidate Range

The target must lie between

```
i/2 = 4
```

and

```
i = 8
```

```text
Index : 0 1 2 3 |4 5 6 7 8| 9
Value : 3 4 5 6 |11 13 14 15 56| 70
                 <----Binary Search---->
```

---

# 🔍 Binary Search

Search inside

```text
[11, 13, 14, 15, 56]
```

### Iteration 1

```text
11 13 14 15 56
      ↑
     mid
```

```
14 > 13
```

Move left.

---

### Iteration 2

```text
11 13
   ↑
  mid
```

Found!

```
Answer = 5
```

---

# 📊 Visualization

```text
                    Entire Sorted Array

3   4   5   6   11   13   14   15   56   70
    ↑
    Start

        ↓

1 → 2 → 4 → 8

                Stop (56 > 13)

        Binary Search

          ↓

11   13   14   15   56
      ↑
    Found
```

---

# ⏱️ Complexity Analysis

### Finding the Range

Each iteration doubles the index.

```
1 → 2 → 4 → 8 → 16 ...
```

Time Complexity:

```
O(log p)
```

where `p` is the position of the target.

---

### Binary Search

Binary Search is performed only on the identified range.

Time Complexity:

```
O(log p)
```

---

### Overall Time Complexity

| Case | Complexity |
|------|------------|
| Best | **O(1)** |
| Average | **O(log p)** |
| Worst | **O(log n)** |

---

### Space Complexity

```
O(1)
```

No extra space is used.
