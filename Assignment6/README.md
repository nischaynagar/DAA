# Assignment-2

**Team Members**
| Enrollment No. | Name | GithubId |
| -------------- | ---- | -------- |
| IIT2019198 | Nischay Nagar | nischaynagar |
| IIT2019199 | Abhishek Bithu | imabcharan |
| IIT2019200 | Raj Chandra | RAJCHANDARA |

**Group No-**"5"

**Faculty Name-**"Dr. M.D. Javed"

**Mentor Name-** "Md. Meraz"

---

## Problem Statement

Travelling Salesman Problem (TSP): Given a set of cities and distance between every pair of cities, the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point.

---

## How to use code

clone this repository on your device locally.Further compile the code and run as per the below instructions. Finally give the input as per the code asks to input.

### Download project

```
git clone https://github.com/nischaynagar/DAA
```

### Compiling the code

Pre-requisit to run this code is to have a any c++ compiler like g++ installed in your system.

```
cd DAA
cd Assignment6
g++ code.cpp
```

### Run the code

```
./a.out
```

### Output

```
The cost of the shortest possible route that visits every city exactly once and returns to the starting point.
```

---

**Test case**

```
Input:
n=4,
vector<vector<int>> cities = {{0, 10, 15, 20},
                            {10, 0, 35, 25},
                            {15, 35, 0, 30},
                            {20, 25, 30, 0}};

Output: minimum: 80
```

### Theory

### Analysis

**Time and Space Complexity**

Naive Solution:-
Time Complexity: Θ(n!)

Dynamic Programming solution:-
Since, there are at most O(n*2^n) subproblems, and each one takes linear time to solve. The total running time is therefore O(n^2*2^n). The time complexity is much less than O(n!), but still exponential. Space required is also exponential.

---

### References

- https://www.geeksforgeeks.org/dynamic-programming/
