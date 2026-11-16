# Setting Up — Maximal Square Solver

> **Fast dynamic programming algorithm to find the largest obstacle-free square on a 2D map.**

## Overview
Given a rectangular grid composed of empty spaces (`.`) and obstacles (`o`), `setting_up` determines the coordinates and size of the largest possible square containing no obstacles, marking it with `x`.

Supports:
- Parsing pre-generated map files
- Dynamic pattern generation on the fly

## Build & Usage
```bash
make
./setting_up map.txt
# or generated map:
./setting_up 100 ".....o...."
```

## License
Open-source under MIT License.
