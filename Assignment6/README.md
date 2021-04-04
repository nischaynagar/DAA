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
cities = {{0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}};

Output: minimum: 80
```

### Theory

Naive Solution:-

Consider city 1 as the starting and ending point.
Generate all (n-1)! Permutations of cities.
Calculate cost of every permutation and keep track of minimum cost permutation.
Return the permutation with minimum cost.

Time Complexity: Θ(n!)

Dynamic Programming solution:-

Let the given set of vertices be {1, 2, 3, 4,….n}. Let us consider 1 as starting and ending point of output. For every other vertex i (other than 1), we find the minimum cost path with 1 as the starting point, i as the ending point and all vertices appearing exactly once. Let the cost of this path be cost(i), the cost of corresponding Cycle would be cost(i) + dist(i, 1) where dist(i, 1) is the distance from i to 1. Finally, we return the minimum of all [cost(i) + dist(i, 1)] values.

To calculate cost(i) using Dynamic Programming, we need to have some recursive relation in terms of sub-problems. Let us define a term C(S, i) be the cost of the minimum cost path visiting each vertex in set S exactly once, starting at 1 and ending at i.
We start with all subsets of size 2 and calculate C(S, i) for all subsets where S is the subset, then we calculate C(S, i) for all subsets S of size 3 and so on.

Note :1 must be present in every subset.

If size of S is 2, then S must be {1, i},
C(S, i) = dist(1, i)
Else if size of S is greater than 2.
C(S, i) = min { C(S-{i}, j) + dis(j, i)} where j belongs to S, j != i and j != 1.

For a set of size n, we consider n-2 subsets each of size n-1 such that all subsets don’t have nth in them.
Using the above recurrence relation, we can write dynamic programming based solution. There are at most O(n\*2^n) subproblems and each one takes linear time to solve. The total running time is therefore O(n^2\*2^n). The time complexity is much less than O(n!), but still exponential. Space required is also exponential. So this approach is also infeasible even for slightly higher number of vertices.

### Analysis

**Time and Space Complexity**

Naive Solution:-
Time Complexity: Θ(n!)

Dynamic Programming solution:-
Since, there are at most O(n*2^n) subproblems, and each one takes linear time to solve. The total running time is therefore O(n^2*2^n). The time complexity is much less than O(n!), but still exponential. Space required is also exponential.

---

### References

- https://www.geeksforgeeks.org/dynamic-programming/
