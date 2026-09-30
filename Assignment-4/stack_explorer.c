/*
 * Stack Explorer Assignment
 * Computer Science XII - Computer Systems
 * 
 * This program explores how function calls work at the stack level,
 * demonstrating recursion, stack growth, stack overflow, and callbacks.
 */

#include <stdio.h>
#include <stdlib.h>

// Global variable for tracking maximum recursion depth
int max_depth = 0;

// =============================================================================
// PART 1: BASIC RECURSION
// =============================================================================
// Implement a recursive factorial function that visualizes stack growth.

// TODO: Implement factorial function
// This function should:
// - Accept an integer n
// - Print "Entering factorial(n)" when called
// - If n <= 1, print "Base case reached" and return 1
// - Otherwise, recursively call factorial(n-1) and multiply by n
// - Print "Returning from factorial(n) = result" before returning
// - Return the factorial result
//
// Hint: int factorial(int n) { ... }
// Example output for factorial(3):
//   Entering factorial(3)
//   Entering factorial(2)
//   Entering factorial(1)
//   Base case reached
//   Returning from factorial(1) = 1
//   Returning from factorial(2) = 2
//   Returning from factorial(3) = 6






// =============================================================================
// PART 2: STACK DEPTH TRACKING
// =============================================================================
// Implement recursive Fibonacci that tracks how deep the recursion goes.

// TODO: Implement fibonacci function with depth tracking
// This function should:
// - Accept two parameters: int n (the Fibonacci number to calculate)
//                          int depth (current recursion depth)
// - Update the global max_depth if current depth is greater
// - Print the current depth and n value
// - If n <= 1, return n (base case)
// - Otherwise, return fibonacci(n-1, depth+1) + fibonacci(n-2, depth+1)
//
// Hint: int fibonacci(int n, int depth) { ... }
// The depth parameter tracks how many levels deep we are in recursion







// =============================================================================
// PART 3: STACK OVERFLOW DEMONSTRATION
// =============================================================================
// Create a function that causes stack overflow, then fix it.

// TODO: Implement infinite_recursion (buggy version)
// This function should:
// - Accept an integer n
// - Print "Call n"
// - Recursively call itself with n+1 (NO BASE CASE - this will overflow!)
//
// This will crash! That's intentional - you'll observe what stack overflow looks like.
// Hint: void infinite_recursion(int n) { ... }





// TODO: Implement safe_recursion (fixed version)
// This function should:
// - Accept an integer n and int max_depth
// - Print "Call n"
// - If n >= max_depth, print "Stopping at max depth" and return (BASE CASE)
// - Otherwise, recursively call itself with n+1
//
// This version has a proper base case and won't overflow.
// Hint: void safe_recursion(int n, int max_depth) { ... }






// =============================================================================
// PART 4: FUNCTION POINTERS AND CALLBACKS
// =============================================================================
// Use function pointers to create flexible array processing.

// TODO: Implement callback functions for array processing
// Create three functions that each accept an integer and return an integer:
// 1. double_value: returns n * 2
// 2. square_value: returns n * n
// 3. negate_value: returns -n
//
// Hint: int double_value(int n) { return n * 2; }







// TODO: Implement process_array function
// This function should:
// - Accept: int* array, int size, int (*callback)(int)
// - The callback parameter is a function pointer to a function that takes int and returns int
// - Loop through the array and apply the callback to each element
// - Print each result
//
// Hint: void process_array(int* arr, int size, int (*callback)(int)) { ... }
// Example: process_array(arr, 5, double_value); applies double_value to each element







// =============================================================================
// PART 5: EVENT CALLBACK SYSTEM
// =============================================================================
// Build a simple event system using function pointers.

#define MAX_CALLBACKS 10

// Event system structure
typedef struct EventSystem {
    void (*callbacks[MAX_CALLBACKS])(int);  // Array of function pointers
    int callback_count;
} EventSystem;

// TODO: Implement event_system_init
// This function should:
// - Accept an EventSystem* pointer
// - Set callback_count to 0
// - Initialize all callback pointers to NULL
//
// Hint: void event_system_init(EventSystem* es) { ... }





// TODO: Implement event_system_register
// This function should:
// - Accept an EventSystem* pointer and a function pointer void (*callback)(int)
// - If callback_count < MAX_CALLBACKS, add the callback to the array
// - Increment callback_count
// - Print "Callback registered" or "Max callbacks reached"
//
// Hint: void event_system_register(EventSystem* es, void (*callback)(int)) { ... }






// TODO: Implement event_system_trigger
// This function should:
// - Accept an EventSystem* pointer and an int event_value
// - Loop through all registered callbacks and call each one with event_value
// - Print "Triggering X callbacks with value Y"
//
// Hint: void event_system_trigger(EventSystem* es, int value) { ... }






// Example callback functions for the event system
void on_score_update(int score) {
    printf("  Score callback: New score is %d\n", score);
}

void on_level_change(int level) {
    printf("  Level callback: Now entering level %d\n", level);
}

void on_health_change(int health) {
    printf("  Health callback: Health is now %d\n", health);
}

// =============================================================================
// MAIN FUNCTION
// =============================================================================

int main() {
    printf("=============================================================\n");
    printf("            STACK EXPLORER: Function Call Mechanics\n");
    printf("=============================================================\n");
    
    // TODO: Test your implementations here
    // 1. Test factorial with a small value (like 5) to see stack visualization
    // 2. Test fibonacci with increasing values (5, 10, 15) and print max_depth
    // 3. Test infinite_recursion briefly (comment out after observing crash!)
    // 4. Test safe_recursion to show the fixed version works
    // 5. Create an array and test process_array with different callbacks
    // 6. Create an EventSystem, register callbacks, and trigger events
    
    printf("\n--- Part 1: Factorial with Stack Visualization ---\n");
    // TODO: Call factorial and print result
    
    
    printf("\n--- Part 2: Fibonacci with Depth Tracking ---\n");
    // TODO: Call fibonacci multiple times and track max_depth
    
    
    
    printf("\n--- Part 3: Stack Overflow Demo (comment out after testing!) ---\n");
    // TODO: Call infinite_recursion (will crash - that's expected)
    // printf("Attempting infinite recursion...\n");
    // infinite_recursion(0);  // WILL CRASH - comment out after observing!
    
    printf("\n--- Part 3: Safe Recursion (Fixed Version) ---\n");
    // TODO: Call safe_recursion with a reasonable max depth
    
    
    printf("\n--- Part 4: Function Pointers and Callbacks ---\n");
    // TODO: Create array and test with different callbacks
    
    
    
    
    printf("\n--- Part 5: Event System ---\n");
    // TODO: Initialize event system, register callbacks, trigger events
    
    
    
    
    printf("\n=============================================================\n");
    printf("Stack exploration complete!\n");
    printf("=============================================================\n");
    
    return 0;
}