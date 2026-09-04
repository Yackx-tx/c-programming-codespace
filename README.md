# C Programming Study Materials

This repository contains C programming exercises, assignments, and revision
notes for practicing the fundamentals of the C language. The examples are
small, focused programs intended for reading, compiling, modifying, and
running locally.

## Contents

### `assignments/`

Course and classroom assignments organized by topic:

- `conditionals/` - `if`, `else`, `switch`, comparisons, and decision-making
- `loops/` - `for`, `while`, and `do-while` loops
- `arrays/` - single-dimensional and multi-dimensional arrays

### `C-exercises/`

Additional practice programs covering conditionals, loops, and arrays. These
examples reinforce concepts introduced in the assignments folder.

### `C-learning/`

Learning examples and revision material, including:

- Operators and expressions
- Conditionals and switch statements
- Functions
- Loops
- Strings
- Small calculator and date-related programs

## Recommended Study Path

1. Start with `C-learning/revision/1_operators.c` to review operators.
2. Continue with conditionals and switch statements.
3. Practice loops using the examples in `assignments/loops/`.
4. Review functions and strings in `C-learning/revision/`.
5. Finish with the single-dimensional and multi-dimensional array exercises.
6. Revisit the assignments and improve them with input validation and clearer
   program structure.

## Requirements

You need a C compiler such as GCC or Clang. On Windows, GCC is commonly
available through MinGW or MSYS2. Dev-C++ project files are also present for
some exercises, but using the command line makes the compilation steps easier
to reproduce.

Check that GCC is installed:

```text
gcc --version
```

## Compile and Run an Exercise

Open a terminal in the directory containing a C source file and compile it:

```text
gcc calculator.c -Wall -Wextra -std=c11 -o calculator.exe
```

Run the program in PowerShell:

```text
.\calculator.exe
```

On Linux or macOS, compile with the same command and run it with:

```text
./calculator
```

Replace `calculator.c` and the output name with the exercise you want to
study. Most files are independent programs with their own `main` function, so
compile one source file at a time.

## Example

```text
cd assignments\conditionals
gcc greatest.c -Wall -Wextra -std=c11 -o greatest.exe
.\greatest.exe
```

## Suggested Practice Routine

For each exercise:

1. Read the problem and predict the output.
2. Compile with warnings enabled.
3. Run normal, boundary, and invalid input cases.
4. Explain each variable, condition, and loop in your own words.
5. Modify the program to solve a related problem.

Useful compiler options:

- `-Wall` and `-Wextra` enable helpful warnings.
- `-std=c11` selects the C11 language standard.
- `-o name` chooses the generated executable name.

## Repository Hygiene

Generated build files are intentionally excluded from version control:

- `*.exe` - compiled Windows executables
- `*.o` - object files
- `*.layout` - Dev-C++ layout files

The rules are defined in the root `.gitignore` file. C source files and useful
learning notes should remain tracked.

## Contributing Improvements

When improving an exercise, keep the original goal clear and prefer small,
readable changes. Good improvements include input validation, meaningful
variable names, comments for genuinely difficult logic, and test cases that
cover edge conditions.
