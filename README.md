# Single Element in Sorted Array

## 📌 Overview
This C++ program finds the single non-duplicate element in a sorted array where every other element appears exactly twice.  
It uses a **modified binary search** approach to achieve **O(log n)** time complexity and **O(1)** space complexity.

---

## ⚙️ How It W orks
The algorithm works as follows:
1. Uses binary search to find the **unique element** in the array.
2. Checks special cases:
   - If the array contains only one element.
   - If the unique element is at the start or end of the array.
3. At each step:
   - If `nums[mid]` is not equal to its neighbors, it is the single element.
   - Otherwise, decide whether to search in the left or right half based on the **index parity** (even/odd) and matching pairs.

---

## 🧪 Example

### 🔸 Input:
A sorted array where every element appears twice except one:
```cpp
vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5};

---

### 🔸 Output:
2

---

## 📂 File Structure
