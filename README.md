# 💻 C/C++ Practice

<p align="center">
  <strong>My C and C++ practice: lecture code, practice sets and small projects, organized by topic.</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/PURPOSE-PROGRAMMING%20PRACTICE-3BA9F5?style=for-the-badge&labelColor=2A3142">
  <img src="https://img.shields.io/badge/LANGUAGES-C%20%7C%20C%2B%2B-7057E8?style=for-the-badge&labelColor=2A3142">
  <img src="https://img.shields.io/badge/FOCUS-PROBLEM%20SOLVING-D63384?style=for-the-badge&labelColor=2A3142">
  <img src="https://img.shields.io/badge/TOOLS-GIT%20%26%20GITHUB-E67E22?style=for-the-badge&labelColor=2A3142">
</p>

---

## 📖 About

This repository contains my C and C++ practice, including lecture programs, chapter-wise practice problems, and a few small projects.

I've organized the code by language, with separate folders for C and C++. Each language folder also has its own README.

---

## 📂 Repository Structure

```text
c-cpp-practice/
├── c/                          # C programming
│   ├── chapter-01-basics/
│   ├── chapter-02-operators/
│   ├── ...
│   ├── chapter-11-dynamic-memory/
│   ├── projects/
│   └── README.md
├── cpp/                        # C++ and OOP
│   ├── basics/
│   ├── pointers/
│   ├── oop/
│   ├── templates/
│   ├── stl/
│   ├── file-io/
│   ├── projects/
│   └── README.md
├── .gitignore
└── README.md
```

| Folder         | What's inside                                                                                              |
| -------------- | ---------------------------------------------------------------------------------------------------------- |
| [`c/`](c/)     | 11 chapters, each with lecture programs and a `practice-set/`, plus 2 projects                             |
| [`cpp/`](cpp/) | Core C++, OOP (classes, constructors, inheritance, polymorphism), templates, STL, file I/O, plus 1 project |

---

## 🚀 Projects

| Project                                                  | Language | Description                                                       |
| -------------------------------------------------------- | -------- | ----------------------------------------------------------------- |
| [Number Guessing Game](c/projects/number-guessing-game/) | C        | Guess a random number from 1 to 100 with higher/lower hints       |
| [Snake Water Gun](c/projects/snake-water-gun/)           | C        | Rock-paper-scissors style game against the computer               |
| [Hybrid Calculator](cpp/projects/hybrid-calculator/)     | C++      | Simple and scientific calculator built using multiple inheritance |

---

## ⚙️ Compiling and Running

You need a C/C++ compiler such as **GCC** (on Windows, MinGW-w64 or MSYS2).

Run the commands from the repository root:

```bash
# C
gcc c/chapter-01-basics/hello.c -o hello
./hello

# C++
g++ cpp/basics/recursion.cpp -o recursion
./recursion
```

> **Note:** Programs that read or write files (`chapter-10-file-io`, `cpp/file-io`) expect the `.txt` files in their respective folders, so `cd` into the relevant folder before running them.

---

## 🛠️ Tools

- Visual Studio Code
- GCC / G++
- Git & GitHub

---

## 📝 Notes

- Code is organized by language, then by chapter or topic.
- Compiled executables, object files, and editor settings are excluded through [`.gitignore`](.gitignore).
- This repository is mainly for learning, practice, and revision. The code reflects what I've learned and practiced along the way, so not everything is meant to be production-ready.

---

<p align="center">
  <i>Maintained as part of my programming practice and learning journey.</i>
</p>
