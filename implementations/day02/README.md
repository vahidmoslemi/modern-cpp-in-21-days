# Day 2 — code from the chapter (Core Fundamentals)

Each folder is one **complete program**, lifted verbatim from the Day 2 chapter under
`book/`, as a standalone C++23 CMake project. Nothing here was edited — this is the book's
code, so compiling it tests the book.

Folders are named `NN-name`, where `NN` is the order the program appears in the chapter and
`name` is the source file the chapter shows above the listing. Each listing in the chapter
prints its path, so you can go from the page to the folder directly. Where the chapter prints
a `CMakeLists.txt`, the file here **is** that file — same project name, same target, same
layout — so what you read is what builds.

Build and run one:

```bash
cd implementations/day02/<folder>
cmake -S . -B build && cmake --build build   # -std=c++23 -Wall -Wextra -Werror
./build/<target>
```

Or check the whole day — build, settings, book-vs-repo, run, and output comparison — in one
command:

```bash
python3 tools/check_day.py 2
```

Where a program prints, `expected_output.txt` holds the book's output; a `run_args.txt` (if
present) holds its command-line arguments.

| Folder | Source | Target | Notes |
|---|---|---|---|
| `01-widths` | `main.cpp` | `d2_widths` | runs; output compared to the book |
| `02-braces` | `main.cpp` | `d2_braces` | runs; output compared to the book |
| `03-auto-demo` | `main.cpp` | `d2_auto_demo` | runs; output compared to the book |
| `04-const-demo` | `main.cpp` | `d2_const_demo` | runs; output compared to the book |
| `05-refs` | `main.cpp` | `d2_refs` | runs; output compared to the book |
| `06-params` | `main.cpp` | `d2_params` | runs; output compared to the book |
| `07-namespaces` | `main.cpp` | `d2_namespaces` | runs; output compared to the book |
| `08-swap-ints` | `main.cpp` | `d2_swap_ints` | compile-only (the book shows no output) |
| `09-traffic-light` | `main.cpp` | `d2_traffic_light` | compile-only (the book shows no output) |
| `10-statline` | `src/main.cpp` | `statline` | compile-only (the book shows no output) |
