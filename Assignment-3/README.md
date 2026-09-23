# Object Simulator Assignment

## Overview
This assignment simulates object-oriented programming using C structs and function pointers to understand how Python's class system works at the implementation level.

## Files in This Repository
- `object_simulator.c`: Assignment file with TODO sections to complete
- `README.md`: This file

## What You Need to Do

Complete all TODO sections in `object_simulator.c`:

1. **Part 1: Base Character Struct** - Define the Character struct with data and function pointers
2. **Part 2: Character Methods** - Implement functions for character behavior
3. **Part 3: Derived Character Types** - Define Warrior and Mage structs using composition
4. **Part 4: Polymorphic Methods** - Implement specialized behavior for each character type

## Compiling and Running

**Mac/Linux:**
```bash
gcc object_simulator.c -o object_simulator
./object_simulator
```

**Windows:**
```bash
gcc object_simulator.c -o object_simulator.exe
object_simulator.exe
```

## Expected Output

Your completed program should produce output showing:
- Basic Character creation and attacks
- Warrior with specialized sword attack
- Mage with mana-based fireball attack
- Polymorphism demonstration where the same function call produces different behavior

## Key Concepts

### Structs as Classes
In Python, you define classes with data and methods. In C, you use structs containing:
- Data fields (like `name`, `health`)
- Function pointers (simulating methods like `attack()`)

### Function Pointers
Function pointers let you store references to functions in structs:
```c
void (*attack)(struct Character* self);
```

This simulates Python's method binding where `hero.attack()` calls the appropriate function.

### Composition-Based Inheritance
To simulate inheritance, embed the base struct as the first member:
```c
typedef struct Warrior {
    Character base;  // "Inherits" Character
    int strength;    // Warrior-specific data
} Warrior;
```

### Polymorphism
Same function call, different behavior based on object type:
```c
hero.attack(&hero);     // Calls character_attack
warrior.attack(&warrior); // Calls warrior_attack
```

## Submission

Submit:
1. GitHub repository URL with your completed `object_simulator.c`
2. Reflection document (`reflection.txt` or `reflection.md`) with 500-600 words