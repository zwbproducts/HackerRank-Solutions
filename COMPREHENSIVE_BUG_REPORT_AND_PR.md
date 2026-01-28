# HackerRank Solutions — Bug Report & PR Description

Date: 2026-01-28
Repo: https://github.com/zwbproducts/HackerRank-Solutions

## Summary

This PR fixes repository-hygiene issues that made the repo awkward to use in shells and automation:

- Removes **spaces** from solution filenames (shell/CI-safe paths).
- Standardizes solution filenames to **snake_case**.
- Organizes solutions into **language-based folders**.
- Adds missing **project documentation**.

## Problems found (and fixed)

### 1) Critical: filenames with spaces

**Problem:** Many source files used spaces in filenames (e.g., `algo rotation.c`).

**Impact:** Breaks common tooling and CI scripts unless everything is carefully quoted.

**Fix:** Renamed to snake_case with no spaces and moved under `solutions/`.

### 2) Missing docs

**Problem:** No README / contributing guidance / style guidance / changelog / code of conduct.

**Fix:** Added:
- `README.md`
- `CONTRIBUTING.md`
- `CHANGELOG.md`
- `CODE_STYLE.md`
- `CODE_OF_CONDUCT.md`
- `solutions/README.md`

### 3) Flat repo structure

**Problem:** All solution files were in the repository root.

**Fix:** Introduced:
- `solutions/c/` (C)
- `solutions/cpp/` (C++)

### 4) Extension/code mismatch

**Problem:** Several `.c` files were actually C++ (e.g., `#include <iostream>`).

**Fix:** Moved those to `solutions/cpp/` and renamed them to `.cpp`.

## File moves / renames

C:
- `ceasar cipher.c` → `solutions/c/caesar_cipher.c`

C++:
- `algo rotation.c` → `solutions/cpp/algo_rotation.cpp`
- `Angryprofessor.c` → `solutions/cpp/angry_professor.cpp`
- `angry children.cpp` → `solutions/cpp/angry_children.cpp`
- `bus station.c` → `solutions/cpp/bus_station.cpp`
- `cavity map.c` → `solutions/cpp/cavity_map.cpp`
- `chocolate feast.c` → `solutions/cpp/chocolate_feast.cpp`
- `cut the sticks.c` → `solutions/cpp/cut_the_sticks.cpp`
- `find digits.c` → `solutions/cpp/find_digits.cpp`
- `find median.cpp` → `solutions/cpp/find_median.cpp`
- `flowers.cpp` → `solutions/cpp/flowers.cpp`
- `grid search.c` → `solutions/cpp/grid_search.cpp`
- `k candy store.c` → `solutions/cpp/k_candy_store.cpp`
- `manasa and stones.c` → `solutions/cpp/manasa_and_stones.cpp`
- `minimum draws.cpp` → `solutions/cpp/minimum_draws.cpp`
- `running time.cpp` → `solutions/cpp/running_time.cpp`
- `service lane.c` → `solutions/cpp/service_lane.cpp`
- `sherlock and beast.c` → `solutions/cpp/sherlock_and_beast.cpp`
- `songs of pi.cpp` → `solutions/cpp/songs_of_pi.cpp`
- `utopian tree.cpp` → `solutions/cpp/utopian_tree.cpp`

## How to build

See `README.md` for simple compile/run examples.

## Notes

This PR intentionally focuses on repository usability and maintainability. It does not attempt to rewrite algorithms or change solution behavior.
