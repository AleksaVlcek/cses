# CSES Problem Set — Solutions

My solutions to problems from the [CSES Problem Set](https://cses.fi/problemset/).

CSES is a collection of classic competitive programming problems, organized by topic
(from introductory problems to graphs, dynamic programming, data structures, and more).
The problems follow the book [Competitive Programmer's Handbook](https://cses.fi/book/book.pdf) by Antti Laaksonen.

## Repository Structure

```
cses/
├── problems/
│   ├── introductory_problems/
│   │   ├── weird_algorithm.cpp
│   │   └── ...
│   ├── sorting_and_searching/
│   ├── dynamic_programming/
│   ├── graph_algorithms/
│   └── ...
└── README.md
```

Each topic has its own folder inside `problems/`, and each problem is a single file named
after the problem (lowercase, words separated by underscores).

## Running

Solutions are written in C++. To compile and run a single solution:

```sh
g++ -std=c++17 -O2 -Wall -o solution.exe problems/introductory_problems/weird_algorithm.cpp
./solution.exe < input.txt
```

Executables (`*.exe`) are ignored via `.gitignore`.

## Progress

| Topic                     |  Solved  |
| ------------------------- |  :----:  |
| Introductory Problems     |    12    |
| Sorting and Searching     |    0     |
| Dynamic Programming       |    0     |
| Graph Algorithms          |    0     |
| Range Queries             |    0     |
| Tree Algorithms           |    0     |
| Mathematics               |    0     |
| String Algorithms         |    0     |
| Geometry                  |    0     |
| Advanced Techniques       |    0     |
| Sliding Window Problems   |    0     |
| Interactive Problems      |    0     |
| Bitwise Operations        |    0     |
| Construction Problems     |    0     |
| Advanced Graph Problems   |    0     |
| Counting Problems         |    0     |
| Additional Problems I     |    0     |
| Additional Problems II    |    0     |

## Note

These solutions are here primarily for learning and for keeping track of my own progress.
If you're working through CSES yourself, try solving each problem on your own before
looking at a solution.
