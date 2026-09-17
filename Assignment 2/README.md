# Memory Manager Assignment

## Overview
This assignment builds a dynamic game inventory system to practice manual memory management using malloc, calloc, realloc, and free.

## Files in This Repository
- `memory_manager.c` - Assignment file with TODO sections to complete
- `README.md` - This file

## What You Need to Do

Complete all TODO sections in `memory_manager.c`:

1. **Part 1: Create Inventory** - Allocate arrays using malloc
2. **Part 2: Expand Inventory** - Grow arrays using realloc
3. **Part 3: Fix Memory Leaks** - Add missing free() calls
4. **Part 4: Safe Pointer Handling** - Handle pointers after freeing

## Compiling and Running

**Mac/Linux:**
```bash
gcc memory_manager.c -o memory_manager
./memory_manager
```

**Windows:**
```bash
gcc memory_manager.c -o memory_manager.exe
memory_manager.exe
```

## Expected Output

Your completed program should produce output showing:
- Part 1: Starting inventory created and freed
- Part 2: Inventory expanded from 3 to 6 items
- Part 3: Item pickups without memory leaks
- Part 4: Safe pointer handling after freeing

## Submission

Submit:
1. GitHub repository URL with your completed `memory_manager.c`
2. Reflection document (`reflection.txt` or `reflection.md`) with 500-600 words