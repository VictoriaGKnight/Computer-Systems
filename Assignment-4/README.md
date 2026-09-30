# Stack Explorer Assignment

## Overview
This assignment explores how function calls work at the stack level, demonstrating recursion, stack growth, stack overflow, and function pointer callbacks.

## Files in This Repository
- `stack_explorer.c`: Assignment file with TODO sections to complete
- `README.md`: This file

## What You Need to Do

Complete all TODO sections in `stack_explorer.c`:

1. **Part 1: Basic Recursion** - Implement factorial with stack visualization
2. **Part 2: Stack Depth Tracking** - Implement Fibonacci with recursion depth tracking
3. **Part 3: Stack Overflow Demo** - Create and fix stack overflow
4. **Part 4: Function Pointers** - Implement callback-based array processing
5. **Part 5: Event System** - Build callback registration and triggering

## Compiling and Running

**Mac/Linux:**
```bash
gcc stack_explorer.c -o stack_explorer
./stack_explorer
```

**Windows:**
```bash
gcc stack_explorer.c -o stack_explorer.exe
stack_explorer.exe
```

## Expected Output

Your completed program should show:
- Factorial calls with stack growing and shrinking
- Fibonacci recursion with depth tracking showing exponential growth
- Stack overflow crash (intentional), then safe version working
- Array processing with different callback functions
- Event system registering and triggering multiple callbacks

## Important Note on Part 3

Part 3 asks you to implement `infinite_recursion` which will deliberately crash your program with a stack overflow. This is expected! After observing the crash, comment out the call to `infinite_recursion` in main before continuing to test the rest of your code.

## Submission

Submit:
1. GitHub repository URL with your completed `stack_explorer.c`
2. Reflection document (`reflection.txt` or `reflection.md`) with 350-500 words