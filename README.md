# 💻 C/C++ Practice

<p align="center">
  <img src="https://img.shields.io/badge/PURPOSE-PROGRAMMING%20PRACTICE-3BA9F5?style=for-the-badge&labelColor=2A3142">
  <img src="https://img.shields.io/badge/LANGUAGES-C%20%7C%20C%2B%2B-7057E8?style=for-the-badge&labelColor=2A3142">
  <img src="https://img.shields.io/badge/FOCUS-PROBLEM%20SOLVING-D63384?style=for-the-badge&labelColor=2A3142">
  <img src="https://img.shields.io/badge/TOOLS-GIT%20%26%20GITHUB-E67E22?style=for-the-badge&labelColor=2A3142">
</p>

---

## 📖 About

This repository contains my C and C++ learning and practice: programs written while following tutorials, solutions to practice problems, and a few small projects.

The code is organized by language, with separate folders for C and C++. Each language folder also has its own README.

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
├── cpp/                        # C++ programming
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

| Folder         | What's inside                                                            |
| -------------- | ------------------------------------------------------------------------ |
| [`c/`](c/)     | 11 chapters with lesson programs and practice sets, plus 2 mini projects |
| [`cpp/`](cpp/) | Core C++, pointers, OOP, templates, STL, file I/O, and 1 mini project    |

---

## 🚀 Mini Projects

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

> **Note:** Programs that read or write files (`chapter-10-file-io`, `cpp/file-io`) expect their `.txt` files in their respective folders. Run these programs from the relevant directory.

---

## 🛠️ Tools

- Visual Studio Code
- GCC / G++
- Git & GitHub

---

## 📝 Notes

- Code is organized by language, then by chapter or topic.
- Compiled executables, object files, and editor settings are excluded through [`.gitignore`](.gitignore).

---

## 📚 Source

I learned from [CodeWithHarry's C Programming Course](https://www.youtube.com/watch?v=aZb0iu4uGwA) and his C++ tutorials.

<p align="center">
  <i>Maintained as part of my programming practice and learning journey.</i>
</p>
