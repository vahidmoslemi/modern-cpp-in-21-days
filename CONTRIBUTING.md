# Contributing to Modern C++ in 21 Days

Thank you for helping. This book is written in public precisely so that others can catch what one author and one review pass will miss.

**The short version:** open an [issue](../../issues) for anything questionable, send a pull request for anything small and concrete, and only submit work you wrote yourself.

---

## What's most valuable

| Priority | Contribution | Why it matters |
|---|---|---|
| 🥇 | **Technical corrections** — wrong claims, undefined behavior, outdated advice, code that doesn't compile | A book that teaches something wrong is worse than no book |
| 🥇 | **Portability reports** — "fails on MSVC 19.38", "Clang 18 warns here", "Fedora ships a different CMake" | The one thing the author genuinely cannot test alone |
| 🥈 | **Clarity fixes** — an explanation that lost you | If it lost you, it lost others. This is a real bug |
| 🥈 | **Missing pitfalls** — a mistake you actually made in the wild | The "Common Pitfall" boxes are built from real experience |
| 🥉 | Better examples, extra exercises, Core Guidelines cross-references | Always welcome |
| 🥉 | Typos, broken links, formatting, accessibility issues | Small, easy, appreciated |

**Not accepted:** rewrites that change the book's teaching order or voice without prior discussion, new chapters not in the table of contents, and anything copied from another source (see below).

---

## Before you open a pull request

### 1. Originality is non-negotiable

This book is published free and public under open licenses. That only works if **everything in it is original.**

- ✅ Write your own code and your own prose.
- ❌ Do **not** paste from Stack Overflow or any Q&A site — those answers are CC BY-SA, and share-alike terms would contaminate this book's licensing.
- ❌ Do **not** paste from cppreference.com — also CC BY-SA. Link to it, describe it in your own words, but never copy its text or example code.
- ❌ Do **not** quote the ISO C++ standard. It is copyrighted by ISO. Describe what it requires in your own words.
- ❌ Do **not** paste from other books, blogs, tutorials, course material, or your employer's codebase.

If you're unsure whether something is safe to include: **write an original equivalent instead.** When in doubt, leave it out.

By opening a pull request you confirm that your contribution is your own original work and that you license it under this project's terms — CC BY 4.0 for prose, MIT for code (see [LICENSE-PROSE](LICENSE-PROSE) and [LICENSE-CODE](LICENSE-CODE)).

### 2. Code must compile — and you must have run it

Every listing in this book is compiled and executed before publication. Contributions are held to the same standard.

```bash
g++ -std=c++20 -Wall -Wextra -Werror -o demo demo.cpp && ./demo
# or: clang++ -std=c++20 -Wall -Wextra -Werror ...
# or: cl /std:c++20 /W4 /EHsc demo.cpp
```

- **No warnings.** `-Werror` (or `/W4` clean) is the bar.
- **Expected output in the book must match real output**, character for character. If you change a sample, re-run it and update the output block.
- State the standard a feature requires and, if you can, which compilers you verified on.

### 3. Match the book's conventions

**Style:**
- Modern, safe idioms. `const` by default, brace initialization, `std::` qualified (never `using namespace std;`), smart pointers over raw `new`/`delete`, named casts over C-style casts.
- 4-space indent, `snake_case` for functions and variables, comments that explain *why* rather than restate the code.
- Examples should be short enough to read in one screen and realistic enough to feel like real work.

**Standard-version badges** — mark any feature newer than C++17:
```html
<span class="std s17">C++17</span>  <span class="std s20">C++20</span>  <span class="std s23">C++23</span>
```

**Core Guidelines boxes** — when a lesson embodies an official rule, cite it. Verify the anchor actually resolves before submitting:
```html
<div class="callout cg">
  <span class="label">Core Guideline</span>
  <span class="rule"><a href="https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#rf-in">F.16: ...</a></span>
  <p>In plain words: [everyday analogy, no jargon]</p>
  <pre><code class="language-cpp">// BAD: ...
// GOOD: ...</code></pre>
</div>
```

**Callout classes in use:** `callout` (note), `callout do`, `callout dont`, `callout pitfall`, `callout cg`.

**Every day follows the same shape:** Today You Will Learn → numbered lessons → Workshop (Q&A, quiz + answers, exercises + full solutions, project) → References for Today. Don't break the rhythm.

**Linux instructions cover both Ubuntu/Debian (`apt`) and Fedora/RHEL (`dnf`).** If you add a Linux command, add both.

### 4. Cite your references

Any external source that informs a claim gets a citation in that day's "References for Today": title, publisher if known, and a URL that is freely and publicly viewable. Link to sources — don't reproduce them.

---

## Pull request process

1. **Fork** and create a branch: `fix/day03-lambda-capture` or `feat/day07-container-table`.
2. **One logical change per PR.** A typo sweep and a technical rewrite should be separate PRs.
3. **Commit messages** follow conventional commits:
   ```
   fix(day03): correct capture lifetime claim in F.53 box
   feat(day07): add exercise on container invalidation
   docs(readme): clarify licensing of code samples
   ```
4. **In the PR description**, state: what changed, why, and — for code — the compiler(s) and platform(s) you verified on.
5. Expect a review conversation. Technical disagreements are welcome; that's the whole point of writing in public.

---

## Reporting a problem without a fix

You do not need to know the answer to be useful. An issue saying *"Day 4's `unique_ptr` example doesn't compile on MSVC 19.38, here's the error"* or *"I didn't understand the move semantics explanation in 4.3 — I got lost at the second paragraph"* is a genuinely valuable contribution.

Please include, where relevant: the day and section, compiler and version, operating system, what you expected, and what happened.

## Reporting a copyright concern

If any part of this book looks copied from another source, **[open an issue](../../issues) right away** (or contact the maintainer privately if you prefer). It will be investigated and, if confirmed, rewritten or removed promptly. Getting this right matters more than any individual page.

## Code of conduct

Be decent. Assume good faith, critique the work rather than the person, and remember that beginners reading this book are watching how the C++ community treats questions.

---

*Not sure if something is worth reporting? It is. Open the issue.*
