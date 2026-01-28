**Title:** chore: repository hygiene — normalize filenames, organize solutions, add docs

**Summary:**
This PR documents and implements repository-hygiene fixes that resolve the first major critical bug discovered earlier: many source files used spaces in their filenames which breaks shell scripts and CI. The changes below remove spaces, standardize filenames to snake_case, classify language (C / C++), and add core documentation.

**What I changed (high level):**
- Renamed files that contained spaces and moved them into `solutions/c/` or `solutions/cpp/`.
- Converted several `.c` files that were actually C++ (contained `iostream`) to `.cpp` and moved them to `solutions/cpp/`.
- Added documentation files: `README.md`, `CONTRIBUTING.md`, `CHANGELOG.md`, `CODE_STYLE.md`, `CODE_OF_CONDUCT.md`, and `solutions/README.md`.
- Updated `COMPREHENSIVE_BUG_REPORT_AND_PR.md` to reflect the implemented changes.

**Changelog excerpt (2026-01-28):**
- Fix: remove spaces from solution filenames for shell/CI compatibility.
- Refactor: organize solutions under `solutions/c` and `solutions/cpp`.
- Docs: add repository README and contribution / style guidance.

**Relevant git history (concise):**
- `52fe653` — chore: normalize filenames, organize solutions, and add docs
  • Implemented the filename normalization, moved files to `solutions/`, and added docs. (Push: master)
- `f864dac` — docs: add comprehensive bug report and PR documentation for repository improvements
  • Original comprehensive analysis describing the issues and the proposed fixes.

**Files moved / renamed (representative):**
- `algo rotation.c` → `solutions/cpp/algo_rotation.cpp`
- `Angryprofessor.c` → `solutions/cpp/angry_professor.cpp`
- `ceasar cipher.c` → `solutions/c/caesar_cipher.c`
- `find median.cpp` → `solutions/cpp/find_median.cpp`
- `service lane.c` → `solutions/cpp/service_lane.cpp`
(see full repository tree for all moves)

**Why this fixes the major bug:**
- Removing spaces in filenames makes the repository shell- and CI-friendly; scripts and Makefiles no longer break on unquoted paths.
- Correct language classification (`.c` vs `.cpp`) prevents confusing compile-time failures and makes it obvious which compiler to use.

**How to verify locally:**

Build a C solution:
```bash
gcc -O2 -Wall -Wextra -std=c11 solutions/c/caesar_cipher.c -o /tmp/caesar
/tmp/caesar < input.txt
```

Build a C++ solution:
```bash
g++ -O2 -Wall -Wextra -std=c++17 solutions/cpp/flowers.cpp -o /tmp/flowers
/tmp/flowers < input.txt
```

**Next steps / PR checklist:**
- [x] File renames + moves committed (see `52fe653`)
- [x] Added README & contribution docs
- [x] Adjust any scripts or CI to use `solutions/` paths if needed
- [ ] (Optional) Add simple CI that builds all solutions to prevent regressions

**Commit to review / PR target:**
- Branch: `fix/repo-hygiene` (pushed to origin)
- Base: `master` of upstream repo

---

Generated: 2026-01-28
Author: GitHub Copilot
