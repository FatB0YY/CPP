**English** | [Русский](./README.ru.md)

# CPP

University C++ coursework from two semesters of computer science at Kazan Federal University: around a hundred small programs covering algorithms, arrays and matrices, string processing, dynamic data structures, OOP, templates, the STL and file I/O.

> **Note.** This repository is kept as a historical archive of my CS coursework. Folder and file names inside are in Russian, as originally submitted — an English guide to each folder is below. My professional work is in front-end development; see the [pinned repositories on my profile](https://github.com/FatB0YY).

## Semester 1 — `1-semester-C++`

Procedural C++ and classic algorithmic exercises.

| Folder | Contents |
| --- | --- |
| `CPP-1-EXAM-main` | The main exam set: ~40 numbered tasks, each a standalone program |
| `CPP-KR-1-main` | Mid-term test assignments |
| `app` | ~30 loose practice programs from lectures and self-study |

Topics covered across these tasks:

- **Number theory** — divisor sums, greatest common divisor, primality tests, primes in a range, Fibonacci numbers, factorials, integer exponentiation, binomial coefficients
- **Arrays** — dynamic allocation and input, sorting, binary search, merging two sorted arrays, k-th maximum, two largest elements, maxima under a condition, cyclic shift, monotonic and symmetric sequence checks
- **Sets modelled with arrays** — equality, subset, union, intersection
- **Matrices** — dynamic allocation, main and secondary diagonal sums, sums above and below a diagonal, row or column with the largest sum, locating a zero row or column, swapping rows and columns, transposition, addition and multiplication of two n×n matrices
- **Strings** — k-th word extraction, longest word, palindromes, words whose first and last letters match, reversing word order, whitespace removal
- **Other** — balanced bracket checking, polynomial evaluation, deliberate memory-overflow experiments

## Semester 2 — `2-semester-C++`

Object-oriented C++, dynamic data structures and the standard library.

| Folder | Contents |
| --- | --- |
| `ооп` (OOP) | Classes, constructors and destructors, encapsulation, `this`, operator overloading, smart pointers, a vector class, a student-record class |
| `перегрузка` (overloading) | Operator overloading exercises |
| `стек и очереди` (stacks and queues) | Stack and queue implementations |
| `шаблоны` (templates) | Function and class templates |
| `файлы` (files) | Writing and reading arrays and matrices to text and binary files |
| `ЭКЗАМЕН` (exam) | Final exam set — STL, dynamic data structures (`ДСД`), templates, copy constructor and assignment operator, plus assorted tasks (`задачи`) |

## Building and running

Each task is a standalone `.cpp` file with its own `main`. Compile any of them directly:

    g++ -std=c++17 "path/to/file.cpp" -o program
    ./program

Programs are console applications; some print prompts and output in Russian, and a few read from or write to `.txt` files placed alongside the source.

## Author

Rodion Ramazanov — [GitHub](https://github.com/FatB0YY) · [Telegram](https://t.me/iamrodionn) 
