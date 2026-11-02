# C Programming

My C practice: the code I wrote while following the [CodeWithHarry C Programming Course](https://www.youtube.com/watch?v=aZb0iu4uGwA) C course, plus my solutions to each chapter's practice set.

## Chapters

| Chapter                                                       | Topics                                               |
| ------------------------------------------------------------- | ---------------------------------------------------- |
| [01 - Basics](chapter-01-basics/)                             | printf, scanf, variables, data types                 |
| [02 - Operators](chapter-02-operators/)                       | arithmetic operators, modulus, precedence            |
| [03 - Conditionals](chapter-03-conditionals/)                 | if-else, else-if, switch, logical operators, ternary |
| [04 - Loops](chapter-04-loops/)                               | while, do-while, for, break, continue                |
| [05 - Functions & Recursion](chapter-05-functions-recursion/) | functions, call by value, recursion                  |
| [06 - Pointers](chapter-06-pointers/)                         | pointers, pointer to pointer, call by reference      |
| [07 - Arrays](chapter-07-arrays/)                             | 1D/2D arrays, arrays and pointers                    |
| [08 - Strings](chapter-08-strings/)                           | strings, fgets, puts, string.h functions             |
| [09 - Structures](chapter-09-structures/)                     | struct, arrays of structs, typedef                   |
| [10 - File I/O](chapter-10-file-io/)                          | fopen, fscanf, fprintf, fgetc                        |
| [11 - Dynamic Memory](chapter-11-dynamic-memory/)             | malloc, calloc, realloc, free                        |

Each chapter has:

- the **tutorial code** (files named by topic, like `for_loop.c`)
- a **`practice-set/`** folder with numbered practice problems (`01_rectangle_area.c`, `02_...`). The question is written at the top of each file.

## Projects

- [Number Guessing Game](projects/number-guessing-game/)
- [Snake Water Gun](projects/snake-water-gun/)

## Notes

- Some files have a mistake **on purpose** to show a common error (like `if (a = 11)` or a `;` after `if`). The comment at the top says so.
- Run the file I/O programs from inside `chapter-10-file-io/` so they can find their `.txt` files.
- When compiling programs that use math.h on Linux, link the math library using -lm.
