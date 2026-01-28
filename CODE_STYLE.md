# Code style (C / C++)

This repo is a solutions dump first, but we keep a few standards so it stays readable.

## General

- Prefer clarity over cleverness.
- Avoid magic numbers where easy.
- Keep functions small and purpose-driven.
- Use consistent indentation (4 spaces).

## C

- Target: `-std=c11`
- Compile warnings: `-Wall -Wextra`
- Prefer `size_t` for sizes and indices when appropriate.

## C++

- Target: `-std=c++17`
- Compile warnings: `-Wall -Wextra`
- Prefer `std::vector` over raw arrays.
- Avoid `using namespace std;` in new files.

## Filenames

- Use `snake_case`.
- No spaces.
