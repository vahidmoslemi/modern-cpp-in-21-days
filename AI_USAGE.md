# AI Usage Disclosure

This book is written with AI assistance, disclosed here in full.

## The short version

A human author (Vahid Moslemi) directs the book, reviews every line of prose and code, runs
and verifies every sample, and personally accepts or rejects every chapter before it is
published. AI is the drafting and reviewing *tool*; the editorial judgment, selection, and
final authorship are human.

## The pipeline

Chapters are produced with **BookForge**, a human-gated, multi-agent pipeline (see
`pipeline/`, `README`-level docs in `book-writer/`). Each chapter moves through:

1. **Draft** — an AI author agent writes the chapter against a fixed *book bible* and a
   per-chapter *contract* derived from the existing human-written chapters.
2. **Deterministic checks** — every code sample is compiled and run at
   `-std=c++23 -Wall -Wextra -Werror` and again under AddressSanitizer/UndefinedBehavior
   Sanitizer; links, quotations, and provenance are scanned. These are not AI judgments.
3. **Independent review panel** — several AI reviewers with *different* mandates read the
   chapter blind to one another: standards conformance, teaching order, licensing/IP, and
   the target reader, plus cross-vendor fact-checking and adversarial reading.
4. **Human Gate 1** — the author reads the consolidated findings and the proposed fix plan
   and approves before any edit is applied.
5. **Human Gate 2** — the author reads the finished chapter and accepts or returns it.

## Models used

- **Anthropic Claude** — the author/drafting agent, four reviewer personas, and the
  synthesizer.
- **Google Gemini** — two cross-vendor reviewers (fact-checking with search grounding, and
  adversarial reading), used for decorrelated error and independent grounding.

Model versions change over time; each committed review under `.bookforge/reviews/` records
the model that produced it.

## Provenance and originality

All prose and code are intended to be original to this book. The pipeline enforces this with
prompt rules (no verbatim reproduction; link sources rather than pasting them — cppreference
and Stack Overflow are CC BY-SA and are never copied), plus mechanical scanners for verbatim
code (Software Heritage) and distinctive prose. External sources the book draws on are
recorded in [`sources.yaml`](sources.yaml).

## Which chapters

- **Days 1–3** were written by the human author directly, before the pipeline was adopted.
- **Days 4 onward** are drafted by the AI author agent and revised under the process above.
  Every chapter, regardless of origin, passes human review before publication.

**Current status:** no chapters are published yet — only the front matter is live on the
site. Days 1–3 are written and are undergoing review and compile-testing; each day goes live
only after it passes.

## On copyright

In the United States, copyright protection attaches to human authorship — including the
creative selection, arrangement, and substantial revision of AI-assisted output. The human
review, editing, and acceptance documented in this repository (and in the committed review
trail) is where that authorship lives. Other jurisdictions differ, and nothing here is legal
advice.
