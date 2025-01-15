# Searching-Algorithm

This repository contains implementations of fundamental searching algorithms in C++. It includes:

*   **Linear Search:** A simple algorithm that sequentially checks each element in a list until the target element is found.
*   **Binary Search:** An efficient algorithm for searching a sorted list by repeatedly dividing the search interval in half.

## Algorithms Implemented

### 1. Linear Search

*   **Description:** This algorithm iterates through each element of an array (or vector) sequentially until the target element is found or the end of the array is reached.
*   **Time Complexity:**
    *   Best Case: O(1) - Target found at the beginning of the list
    *   Average Case: O(n) - Target found somewhere in the middle
    *   Worst Case: O(n) - Target not found or found at the end of the list
*   **Space Complexity:** O(1) - Constant space used
*   **Implementation:** `linear_search.cpp`
*   **Video Explanation:** [YouTube Video ](https://youtu.be/j5uXyPJ0Pew?si=ve-ebgwmaWETGRmq)

### 2. Binary Search

*   **Description:** This algorithm efficiently searches for a target element in a *sorted* array by repeatedly dividing the search interval in half.
*   **Time Complexity:**
    *   Best Case: O(1) - Target found at the middle of the list
    *   Average Case: O(log n)
    *   Worst Case: O(log n)
*   **Space Complexity:**
    *   Iterative: O(1) - Constant space used
    *   Recursive: O(log n) - Due to function call stack
*   **Implementation:** `binary_search.cpp`
*   **Video Explanation:**
 - [YouTube Video part-1.](https://youtu.be/j5uXyPJ0Pew?si=ve-ebgwmaWETGRmq)
 - [YouTube Video part-2](https://youtu.be/OAZc1zwjERU?si=xya4wFonL7LL4ww_)
