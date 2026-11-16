# 📐 Setting Up — Maximal Square Solver via Dynamic Programming

[![Language: C](https://img.shields.io/badge/Language-C-00599C.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Build: Make](https://img.shields.io/badge/Build-Makefile-orange.svg)](Makefile)
[![Module: B-CPE-110](https://img.shields.io/badge/Epitech-B--CPE--110-blue.svg)](https://www.epitech.eu/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> **Setting Up is an algorithmic challenge to find the largest obstacle-free square on a 2D map**, optimized for ultra-high speed and minimal memory footprint.

---

## 🧠 Dynamic Programming Algorithm

A naive search for the largest square has a complexity of $O(N^3)$ or $O(N^4)$, which will timeout on $10,000 	imes 10,000$ grids.

`setting_up` implements an **optimal $O(N 	imes M)$ Dynamic Programming approach**:

Let $DP[i][j]$ represent the side length of the largest square whose bottom-right corner is at cell $(i, j)$:

$$DP[i][j] = egin{cases} 
0 & 	ext{if cell } (i, j) 	ext{ is an obstacle ('o')} \
1 + \min(DP[i-1][j], DP[i][j-1], DP[i-1][j-1]) & 	ext{if cell } (i, j) 	ext{ is empty ('.')}
\end{cases}$$

### Memory Optimization
Rather than maintaining an entire $N 	imes M$ matrix in memory, the implementation keeps only the **current and previous row buffers**, reducing memory consumption from $O(N 	imes M)$ down to $O(M)$ space complexity.

---

## 🛠️ Build & Usage

```bash
make
./setting_up maps/map_example.txt
```

### Dynamic Generator Mode
```bash
./setting_up 10 "..o..o...."
```

---

## 📜 License

Licensed under the **MIT License with attribution** to Lucas Lhomme (Crabe).
