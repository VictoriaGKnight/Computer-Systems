# Memory Detective Assignment

## Overview
This assignment investigates how C programs organize memory by exploring the four main memory segments:
- **Stack**: Automatic storage for local variables and function calls
- **Heap**: Dynamic memory allocated during program execution
- **Data**: Global and static variables with fixed addresses
- **Text**: Program code (not directly explored in this assignment)

## Files in This Repository
- `memory_detective.c` - Main assignment file with TODO sections to complete
- `README.md` - This file

## Getting Started

### Prerequisites
You need a C compiler installed on your machine. See Resource 1 in the assignment for installation instructions.

Verify your installation:
```bash
gcc --version
```

### Compiling Your Program

Compile manually by running:
```bash
gcc -Wall -Wextra memory_detective.c -o memory_detective
./memory_detective
```

## What You Need to Do

Complete all TODO sections in `memory_detective.c`:

1. **Part 1: Data Types and Sizes** - Declare variables of different types and print their addresses and sizes
2. **Part 2: Stack Allocation** - Investigate local variables in functions
3. **Part 3: Data Segment** - Examine global and static variables
4. **Part 4: Heap Allocation** - Allocate memory dynamically using malloc()

### Format Specifiers
- `%d` for int
- `%f` for float
- `%lf` for double
- `%c` for char
- `%p` for pointers/addresses (use with `(void*)&variable`)
- `%zu` for size_t (returned by sizeof())

### Memory Address Printing
Always cast addresses to `(void*)` when using `%p`:
```c
printf("address = %p\n", (void*)&my_variable);
```

### Malloc Usage
```c
int *ptr = (int*)malloc(sizeof(int));  // Allocate
if (ptr != NULL) {
    *ptr = 777;                         // Use
    free(ptr);                          // Free when done
}
```

## Submission Requirements

1. **Code**: Push your completed `memory_detective.c` to your GitHub repository
2. **Reflection**: Include `reflection.txt` or `reflection.md` (400-500 words) addressing:
   - Python vs C Memory Model (200-250 words)
   - Memory Observations (200-250 words)
