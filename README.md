# Competitive Programming

> A personal archive of **900+ solutions** to algorithmic problems, written between **2015 and 2018** across a dozen online judges and contests.

![Solutions](https://img.shields.io/badge/solutions-900%2B-2563eb?style=flat-square)
![Codeforces](https://img.shields.io/badge/Codeforces-560%20problems-1f6feb?style=flat-square)
![Languages](https://img.shields.io/badge/C%2B%2B%20·%20Python%20·%20Go-informational?style=flat-square)
![Period](https://img.shields.io/badge/2015–2018-archive-64748b?style=flat-square)
[![License: MIT](https://img.shields.io/badge/license-MIT-22c55e?style=flat-square)](LICENSE)

This repository collects the competitive-programming work I did over roughly four years — mostly during university — solving problems on Codeforces, ICPC regional contests, Project Euler, Google Code Jam and others. It is kept as an **archive**: a record of sustained practice in algorithms, data structures and contest problem-solving, not an actively maintained project.

It is the foundations layer of my portfolio. The interesting things here are the *range* — graph algorithms, dynamic programming, number theory, geometry, data structures — and the *volume* (~560 distinct Codeforces problems alone), built one problem at a time.

## Contents

- [Platforms](#platforms)
- [Repository structure](#repository-structure)
- [Featured solutions](#featured-solutions)
- [Reusable templates & reference algorithms](#reusable-templates--reference-algorithms)
- [Training notebook](#training-notebook)
- [Building & running](#building--running)
- [Tech](#tech)
- [License](#license)

## Platforms

Counts are source files (`.cpp` / `.py` / `.go`) under each directory; some problems are solved in more than one language.

| Platform | Solutions | Primary language | What it is |
|---|---:|---|---|
| [Codeforces](codeforces) | 565 | C++ | Rated contest problems — ~560 distinct problems. The bulk of this repo. |
| [ICPC](icpc) | 79 | C++ / Python | 11 regional contest sets (mostly Mexican/Latin-American RPC regionals, 2009–2018). |
| [Project Euler](projecteuler) | 107 | C++ / Python / Go | Math-heavy problems — number theory, combinatorics, big integers. |
| [edX](edx) | 42 | C++ / Python | Algorithms & C++ coursework, organized by week. |
| [Google Code Jam](codejam) | 31 | C++ / Python | Qualification and round problems, 2016–2018. |
| [UVa](uva) | 26 | C++ | Online Judge classics, including a *Competitive Programming 3* book track. |
| [HackerRank](hackerrank) | 19 | C++ | HourRank / Week of Code contests and the Project Euler+ track. |
| [csacademy](csacademy) | 13 | C++ | Short, well-defined algorithmic problems. |
| [Kattis](kattis) | 12 | C++ | `algo.is` introductory track and NCPC 2017. |
| [AtCoder](atcoder) | 8 | C++ | Beginner Contest problems. |
| [Rosalind](rosalind) | 8 | Python | Bioinformatics — DNA/RNA strings, k-mer counting on a real genome. |
| [SPOJ](spoj) | 1 | C++ | Inversion counting with a Fenwick tree. |

## Repository structure

```
.
├── codeforces/      Codeforces solutions, named <contestID><index> (e.g. 978G.cpp)
├── icpc/            ICPC regional contests, one folder per contest (<year>_<name>)
├── projecteuler/    Project Euler, zero-padded by problem number (001.cpp …)
├── codejam/         Google Code Jam, nested <year>/<round>/<problem>/
├── uva/             UVa Online Judge — archive/ (flat) and cp3/ (book taxonomy)
├── edx/             edX algorithms coursework, by week
├── hackerrank/      HackerRank contests and tracks
├── kattis/          Kattis problems, by track
├── csacademy/       csacademy problems
├── atcoder/         AtCoder Beginner Contests
├── rosalind/        Rosalind bioinformatics problems
├── spoj/            SPOJ
├── gcp_book/        CSES set & recursion/backtracking exercises
├── algorithms/      Reference implementations (DSU, segment tree, sieve)
├── templates/       Reusable contest scaffolding & input generators
└── Training.ipynb   Notebook analyzing my own Codeforces practice data
```

## Featured solutions

A few solves that show the range of techniques in this repo:

| Problem | Technique |
|---|---|
| [Project Euler 500](projecteuler/500.cpp) | Sieve to 7.4M + a min-heap lazily generating prime-power divisor contributors. |
| [Codeforces 978G](codeforces/978G.cpp) | Greedy exam scheduling with a deadline-keyed priority queue; constructive output. |
| [Codeforces 980C](codeforces/980C.cpp) | Interval coloring with a `K`-window — amortized two-pointer over the value range. |
| [SPOJ INVCNT](spoj/INVCNT.cpp) | Counting inversions with a custom Fenwick (Binary Indexed Tree). |
| [AtCoder ABC059 D](atcoder/abc_059/D.cpp) | Game theory — brute-force Grundy recursion (kept as a comment) reduced to an O(1) rule. |
| [csacademy — divisor_clique](csacademy/divisor_clique.cpp) | Longest divisibility chain via an LIS-style DP on a sorted array. |
| [csacademy — black_shapes](csacademy/black_shapes.cpp) | Connected components / flood fill on a grid. |
| [ICPC 2018 RPC04 — G](icpc/2018_RPC04/G.cpp) | Grid DFS connected components with a size threshold and scoring. |
| [ICPC 2017 RPC10 — J](icpc/2017_RPC10/J.cpp) | Enumerating all valid stack push/pop sequences via permutations + stack simulation. |
| [ICPC 2017 RPC03 — dpa02](icpc/2017_RPC03/dpa02.cpp) | Perfect / abundant / deficient number classification using a sieve and divisor sums. |

## Reusable templates & reference algorithms

[`algorithms/`](algorithms) holds standalone reference implementations:

- [`dsu_size.cpp`](algorithms/dsu_size.cpp) — Disjoint Set Union with union-by-size, path compression and subtree-sum augmentation.
- [`segment_tree_range.cpp`](algorithms/segment_tree_range.cpp) — an iterative **lazy-propagation segment tree** templated on value / modifier types.
- [`sieve.cpp`](algorithms/sieve.cpp) — Sieve of Eratosthenes up to 10⁷ with self-test assertions.

[`templates/`](templates) holds the contest scaffolding I used: C++ / ICPC / Code Jam starter files, a container-printing debug header (debug template credited to Bidhan Roy), a script that copies the right template to a new file, and `test_gen.py` — a cookbook of random-input generators (arrays, matrices, trees, connected graphs, strings).

## Training notebook

[`Training.ipynb`](Training.ipynb) is a pandas / seaborn analysis of my own Codeforces practice: it joins my submission log with problem ratings and explores solve time, accepted counts and rating progression over time — self-quantified practice tracking.

## Building & running

Solutions are standalone files — there is no build system. Most are C++ and compile directly:

```sh
g++ -O2 -std=c++17 codeforces/978G.cpp -o solve && ./solve
```

Python solutions run directly (`python3 projecteuler/013.py`). Some directories include `.in` / `.out` files — sample inputs and expected outputs used while solving.

## Tech

**C++** is the primary language (~85% of solutions, `#include <bits/stdc++.h>` competitive style), with **Python** for quicker problems, input generators and the bioinformatics track, and a handful of **Go** solutions in Project Euler. C++ solutions target C++14/17.

## License

[MIT](LICENSE) © Diego Said Anaya Mancilla — [Codeforces: redcpp](https://codeforces.com/profile/redcpp)
