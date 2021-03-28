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

Given an NxN chessboard and a Knight at position (x,y). The Knight has to
take exactly K steps, where at each step it chooses any of the 8 directions
uniformly at random. What is the probability that the Knight remains in
the chessboard after taking K steps, with the condition that it can’t enter
the board again once it leaves it? Solve using Dynamic programming.

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
cd Assignment2
g++ code.cpp
```

### Run the code

```
./a.out
```

### Output

```

```

---

**Test case**

```

```

---

### Theory

It can be observed that at every step the Knight has 8 choices to choose from. Suppose, the Knight has to take k steps and after taking the Kth step the knight reaches (x,y). There are 8 different positions from where the Knight can reach to (x,y) in one step, and they are: (x+1,y+2), (x+2,y+1), (x+2,y-1), (x+1,y-2), (x-1,y-2), (x-2,y-1), (x-2,y+1), (x-1,y+2).
If the probablities of reaching these 8 positions after k-1 steps is already known then, the final probablity after k steps will simply be equal to the (Σ probability of reaching each of these 8 positions after K-1 steps)/8.

Here we are dividing by 8 because each of these 8 positions has 8 choices and position (x,y) is one of the choices.

For the positions that lie outside the board, we will either take their probabilities as 0 or simply neglect it.

Since we need to keep track of the probabilities at each position for every number of steps, we need Dynamic Programming to solve this problem.
We are going to take an array dp[x][y][steps] which will store the probability of reaching (x,y) after (steps) number of moves.

Base case: if the number of steps is 0, then the probability that the Knight will remain inside the board is 1

### Analysis

**Time Complexity**

**Space Complexity**

---

### References

- https://www.geeksforgeeks.org/dynamic-programming/
