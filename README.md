# Modern C++ in 21 Days

**A free, open-source, self-teaching book for developers who want to *use* modern C++ professionally.**

*Free to read, free to share, free forever — no paywall, no signup, no ads.*

📖 **[Read it online →](https://vahidmoslemi.github.io/modern-cpp-in-21-days/)**

[![Prose: CC BY 4.0](https://img.shields.io/badge/prose-CC%20BY%204.0-blue.svg)](LICENSE-PROSE)
[![Code: MIT](https://img.shields.io/badge/code-MIT-green.svg)](LICENSE-CODE)
[![C++17/20/23](https://img.shields.io/badge/C%2B%2B-17%20%7C%2020%20%7C%2023-00599C.svg)](#what-it-covers)
[![Status: front matter published · chapters in progress](https://img.shields.io/badge/status-front%20matter%20published%20%C2%B7%20chapters%20in%20progress-orange.svg)](#progress)
[![PRs welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](CONTRIBUTING.md)
[![Free forever](https://img.shields.io/badge/price-free%20forever-success.svg)](#always-free)

---

## Why

Many people still picture C++ as the complicated language of the C++98 days. C++17, C++20, and C++23 changed that: smart pointers instead of naked `new`, ranges instead of hand-written loops, `std::expected` instead of error-code spaghetti, concepts that catch mistakes before the program runs.

This is the practical, hands-on path into that language that I wanted as a self-learner — written in the spirit of the "in 21 Days" book that taught me C over twenty years ago.

**For:** developers who know some language and need C++ for real work — SDKs, cross-platform code, safety, testability, performance. No prior C++ required.

## What it covers

One chapter per "day" (2–4 focused hours), each ending in exercises, a quiz, and a small project you build.

| Days | Topics |
|---|---|
| **1–5** | Toolchain setup · types, `auto`, `const`, references · functions, lambdas, `constexpr` · **RAII, smart pointers, move semantics** · classes and value semantics |
| **6–9** | Error handling (`std::optional`, `std::expected`) · containers · algorithms and **ranges** · strings, `string_view`, `std::format` |
| **10–13** | Templates · **concepts**, variadics, CTAD · compile-time programming · `variant`, `span`, `tuple` |
| **14–15** | Threads, mutexes, atomics, memory model · futures, `jthread`, **coroutines** |
| **16–21** | Sanitizers, clang-tidy, Core Guidelines · **testing & TDD** · CMake and dependencies · **SDK/API/ABI design** · cross-platform CI · capstone SDK |

Tools taught alongside: **VSCode, CMake, CTest, GCC/Clang/MSVC, vcpkg/Conan, GoogleTest/Catch2, sanitizers, GitHub Actions.**

Standards are badged inline (`C++17`/`C++20`/`C++23`) with portability notes where compilers differ. **C++ Core Guidelines** rules are woven in — each linked to the official rule and explained in plain language with a before/after example.

## Progress

**Right now only the front matter is published** (preface, how-to, prerequisites, about, and
the full table of contents). **No chapters are live yet** — every chapter link on the site
shows a short "coming soon" page. Days 1–3 are already **written**, but they are being
reviewed and compile-tested before they go live, and days 4+ are still to come. Chapters are
published one at a time, in order, so each builds cleanly on the last. ⭐ Star or watch for
new chapters.

| Day | Chapter | Status |
|---|---|---|
| 1 | Toolchain — Compilers, VSCode, CMake | ✍️ Written · in review & test (not yet published) |
| 2 | Core Fundamentals — Types, `auto`, `const`, References | ✍️ Written · in review & test (not yet published) |
| 3 | Functions, Overloading, Lambdas, `constexpr` | ✍️ Written · in review & test (not yet published) |
| 4 | Memory and Ownership — RAII, Smart Pointers, Move | 📋 Planned (next) |
| 5–21 | See the [table of contents](https://vahidmoslemi.github.io/modern-cpp-in-21-days/#toc) | 📋 Planned |

## How it's written

I write this with **agentic AI as the drafting tool and my own judgment as the editor** — directing structure and pedagogy, reviewing every line of code, refining text and examples, and verifying every reference. Every sample is compiled and run before publication (`-Wall -Wextra -Werror`, C++23) — see [AI_USAGE.md](AI_USAGE.md).

Automation plus one reviewer still isn't many eyes. If something is wrong, unclear, or outdated, please say so.

## Contributing

Most valuable: **technical corrections**, **portability reports** ("fails on MSVC 17.9" is gold), **clarity fixes**, better examples and exercises.

Open an [issue](../../issues) or send a PR — see [CONTRIBUTING.md](CONTRIBUTING.md) for conventions (original code only, compile-tested, standard badges, guideline links). Contributions are accepted under the project's licenses.

## Read and build locally

The book is plain HTML — no build step, no dependencies. Each chapter and front-matter section is its own self-contained page under `book/`.

```bash
git clone https://github.com/vahidmoslemi/modern-cpp-in-21-days.git
cd modern-cpp-in-21-days
open book/index.html    # macOS · xdg-open (Linux) · start (Windows)
```

Per-day sample code lives in `implementations/dayNN/`, each project with its own `CMakeLists.txt`:

```bash
cd implementations/day03/lambda && cmake -S . -B build && cmake --build build && ./build/lambda_usecase_1
```

**Needs:** a C++23-capable compiler (GCC 14+, Clang 18+, MSVC 19.40+) and CMake 3.25+. Day 1 covers installing everything on Ubuntu/Debian, Fedora/RHEL, macOS, and Windows.

## Always free

This book is free today and will stay free. There is no "pro edition", no paywalled chapters, no email wall, no ads, and no plan to introduce any. The complete book — every chapter, every exercise solution, every code sample — lives in this repository under open licenses.

That is a deliberate commitment, and the licensing below makes it irreversible: once released under CC BY 4.0 and MIT, this material **cannot be taken back behind a paywall.** Even if this repository disappeared tomorrow, every copy anyone made remains legally free to read, share, and build on.

If it helps you, the only thanks needed is a ⭐, a correction, or passing it to someone else learning C++.

## License

- **Prose:** [CC BY 4.0](LICENSE-PROSE) — share and adapt with attribution.
- **Code samples:** [MIT](LICENSE-CODE) — use freely in any project.

© 2026 Vahid Moslemi. Provided "as is", without warranty of any kind.

## About the author

**Vahid Moslemi** — senior software engineer and software architect, with 10+ years designing and shipping complex, reliable cross-platform software in modern C++, Qt, and QML for desktop (Windows/Linux), Android, and embedded Linux. Focus areas: software architecture and design patterns, reusable platforms and SDKs (API/ABI design), portability, safety, and test automation. MSc in Computer Engineering, BSc in Computer Hardware Engineering.

That's also why this book weights portability, safety, testability, and SDK design the way it does — those are the daily realities of shipping one codebase to an embedded device and a workstation.

[GitHub](https://github.com/vahidmoslemi/) · [LinkedIn](https://www.linkedin.com/in/vahid-moslemi/)

Chapter announcements go out on LinkedIn. Questions and corrections belong in the [issues](../../issues), where everyone benefits from the answer.

---

## 📌 Copyright notes (read before contributing or forking)

This book is published free and public, so it holds a strict originality line. These rules protect the project — and you.

**Everything here is original.** All prose and every line of code were written from scratch for this book. Nothing is copied from other books, tutorials, blogs, forums, Q&A sites, or documentation.

**Sources are cited, never reproduced.** Reference sites are linked so readers can go deeper, with these specific limits:

| Source | Rule applied here |
|---|---|
| **ISO C++ standard** | Copyrighted by ISO. Never quoted — requirements are described in our own words. |
| **cppreference.com** | Licensed CC BY-SA. Linked and credited, but **no text or example code is copied** (CC BY-SA would force share-alike terms onto this book). |
| **C++ Core Guidelines** | Rule IDs and titles are cited with links; explanations and examples are ours. |
| **Books (Stroustrup, Meyers, etc.)** | Not quoted, not paraphrased closely, not used as an example source. |
| **Stack Overflow / forums** | Not used as a source of code. (Answers are CC BY-SA — the same share-alike problem.) |

**Third-party tools are named and linked, never bundled.** GCC (GPLv3 + runtime exception), Clang/LLVM (Apache 2.0 + LLVM exceptions), CMake (BSD-3-Clause), VS Code (product license; "Code – OSS" is MIT), vcpkg (MIT), Conan (MIT), GoogleTest (BSD-3-Clause), Catch2 (BSL-1.0). Product and company names are trademarks of their owners, used for identification only.

**On the title and style.** This book is written *in tribute to* the pedagogy of the SAMS "Teach Yourself … in 21 Days" series. It is **not affiliated with, endorsed by, or derived from** that series or its publisher, and contains none of its text, examples, or artwork. Teaching *format* (daily chapters, quizzes, exercises) is not protected by copyright; text and examples are — and none are reused.

**If you contribute:** submit only code and prose **you wrote yourself**. Do not paste from Stack Overflow, documentation, other books, or your employer's codebase. By opening a PR you confirm your contribution is your own original work and that you license it under this project's terms (CC BY 4.0 prose / MIT code).

**If you fork or reuse:** the CC BY 4.0 + MIT terms above are all you need — just keep attribution. You may mirror it, translate it, print it for a class, or build a course on it. CC BY 4.0 also permits commercial reuse by others (someone could sell a printed copy); that is accepted deliberately, because a restriction-free license is what keeps the material genuinely free and reusable — and it can never remove the free version that lives here. Note that AI-assisted authorship can affect how copyright applies in some jurisdictions; the licenses are offered in good faith to the extent the material is protectable, and nothing here is legal advice.

**Found something that looks copied?** [Open an issue](../../issues) immediately — it will be rewritten or removed. Getting this right matters more than any individual page.

---

*Found something wrong? [Open an issue](../../issues) — that's the whole point.*
