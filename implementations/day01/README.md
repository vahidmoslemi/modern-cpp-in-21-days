# Day 1 — code from the chapter (Toolchain)

Each folder is one **complete program**, lifted verbatim from the Day 1 chapter under
`book/`, as a standalone C++23 CMake project. Nothing here was edited — this is the book's
code, so compiling it tests the book.

Folders are named `NN-name`, where `NN` is the order the program appears in the chapter and
`name` is the source file the chapter shows above the listing. Each listing in the chapter
prints its path, so you can go from the page to the folder directly. Where the chapter prints
a `CMakeLists.txt`, the file here **is** that file — same project name, same target, same
layout — so what you read is what builds.

Build and run one:

```bash
cd implementations/day01/<folder>
cmake -S . -B build && cmake --build build   # -std=c++23 -Wall -Wextra -Werror
./build/<target>
```

| Folder | Source | Target | Notes |
|---|---|---|---|
| `01-hello` | `main.cpp` | `d1_hello` | runs; output compared to the book |
| `02-hello-cmake` | `src/main.cpp` | `hello` | runs; output compared to the book |
| `03-sum-of-evens` | `src/main.cpp` | `d1_sum_of_evens` | compile-only (the book shows no output) |
| `04-glimpse-old` | `main.cpp` | `d1_glimpse_old` | runs; output compared to the book |
| `05-glimpse-modern` | `main.cpp` | `d1_glimpse_modern` | runs; output compared to the book |
| `06-goodbye` | `src/main.cpp` + `src/goodbye.cpp` | `hello` + `goodbye` | one build, two binaries · runs; output compared to the book |
| `07-daysleft` | `src/main.cpp` | `daysleft` | runs; output compared to the book · args: `300 40` |
