/*
 * Memory Detective Assignment
 * Computer Science XII - Computer Systems
 * 
 * This program investigates how C organizes program memory by exploring
 * different memory segments: stack, heap, data, and text.
 * 
 * Complete all TODO sections to reveal where your variables live in memory.
 */

#include <stdio.h>
#include <stdlib.h>

// =============================================================================
// PART 1: DATA TYPES AND SIZES
// =============================================================================

void investigate_data_types() {
    printf("\n=== DATA TYPES AND MEMORY SIZES ===\n");
    
    // TODO: Declare variables of different types:
    // - int called 'my_int' with value 42
    int my_int = 42;

    // - float called 'my_float' with value 3.14
    float my_float = 3.14f;

    // - double called 'my_double' with value 2.71828
    double my_double = 2.71828;

    // - char called 'my_char' with value 'C'
    char my_char = 'C';
    
    
    // TODO: For each variable, print:
    // 1. Its value
    // 2. Its memory address using %p format specifier and (void*)&variable
    // 3. Its size in bytes using sizeof() operator
    //
    // Example format:
    // printf("int: value = %d, address = %p, size = %zu bytes\n", 
    //        my_int, (void*)&my_int, sizeof(my_int));

    // my_int
    printf("int: value = %d, address = %p, size = %zu bytes\n", 
            my_int, (void*)&my_int, sizeof(my_int));
    // my_float
    printf("float: value = %f, address = %p, size = %zu bytes\n",
            my_float, (void*)&my_float, sizeof(my_float));
    // my_double
    printf("double: value = %lf, address = %p, size = %zu bytes\n",
            my_double, (void*)&my_double, sizeof(my_double));
    // my_char
    printf("char: value = %c, address = %p, size = %zu bytes\n",
            my_char, (void*)&my_char, sizeof(my_char));
}

// =============================================================================
// PART 2: STACK ALLOCATION - Function Local Variables
// =============================================================================
// Local variables live on the stack - they're created when a function is called
// and destroyed when it returns.
void investigate_stack() {
    // TODO: Declare three local variables:
    // - An integer called 'stack_int' with value 42
    // - A float called 'stack_float' with value 3.14
    // - A char called 'stack_char' with value 'A'
    int stack_int = 42;
    float stack_float = 3.14f;
    char stack_char = 'A';
    

    printf("\n=== STACK ALLOCATION ===\n");
    // TODO: Print the address and value of each stack variable
    // Use format specifier %p for addresses and appropriate specifiers for values
    // Example: printf("stack_int: address = %p, value = %d\n", (void*)&stack_int, stack_int);
    
    // stack_int
    printf("stack_int: address = %p, value = %d\n", (void*)&stack_int, stack_int);
    // stack_float
    printf("stack_float: address = %p, value = %f\n", (void*)&stack_float, stack_float);
    // stack_char
    printf("stack_char: address = %p, value = %c\n", (void*)&stack_char, stack_char);
    
}

void nested_function_call() {
    // TODO: Declare a local integer called 'nested_var' with value 999
    int nested_var = 999;
    
    printf("\n=== NESTED FUNCTION STACK ===\n");
    // TODO: Print the address and value of nested_var
    // Observe: Is this address higher or lower than variables in investigate_stack()?
    printf("nested_var: address = %p, value = %d\n", (void*)&nested_var, nested_var);
}

// =============================================================================
// PART 3: DATA SEGMENT - Global and Static Variables
// =============================================================================
// Global variables must be declared outside of any function.
// They live in the data segment - they exist for the entire program lifetime
// and have fixed memory addresses.

// TODO: Declare a global integer variable called 'global_counter' and initialize it to 100
int global_counter = 100;

// TODO: Declare a static integer variable called 'static_value' and initialize it to 200
static int static_value = 200;

void investigate_data_segment() {
    printf("\n=== DATA SEGMENT (Global and Static Variables) ===\n");
    
    // TODO: Print the addresses and values of global_counter and static_value
    // Example: printf("global_counter: address = %p, value = %d\n", 
    //                 (void*)&global_counter, global_counter);
    
    // global_counter
    printf("global_counter: address = %p, value = %d\n", (void*)&global_counter, global_counter);
    // static_value
    printf("static_value: address = %p, value = %d\n", (void*)&static_value, static_value);   
}


// =============================================================================
// PART 4: HEAP ALLOCATION
// =============================================================================
// Heap memory is dynamically allocated during program execution using malloc().
// Unlike stack variables, heap memory persists until you explicitly free() it.

void investigate_heap() {
    printf("\n=== HEAP ALLOCATION ===\n");
    
    // TODO: Use malloc() to allocate memory for an integer on the heap
    // Store the returned pointer in a variable called 'heap_int'
    // Hint: int *heap_int = (int*)malloc(sizeof(int));
    int *heap_int = (int*)malloc(sizeof(int));
    
    // TODO: Check if malloc succeeded (heap_int should not be NULL)
    // If successful:
    // - Assign the value 777 to the allocated memory using *heap_int = 777
    // - Print the address of heap_int and its value
    // - Print the size of the allocated memory
    //
    // Example: printf("heap_int: address = %p, value = %d, size = %zu bytes\n",
    //                 (void*)heap_int, *heap_int, sizeof(int));
    
    if (heap_int != NULL) {
        *heap_int = 777;
        printf("heap_int: address = %p, value = %d, size = %zu bytes\n",
                (void*)heap_int, *heap_int, sizeof(int));
    } else {
        printf("Heap Allocation Failed\n");
        return;
    }
    
    // TODO: Free the allocated memory using free(heap_int)
    // Note: After free(), the pointer still holds the address, but the memory
    // is no longer yours to use (we'll explore this more in Unit 3)
    free(heap_int);
}

// =============================================================================
// MAIN FUNCTION
// =============================================================================

int main() {
    printf("=============================================================\n");
    printf("         MEMORY DETECTIVE: Investigating Program Memory\n");
    printf("=============================================================\n");
    
    // Part 1: Explore data types and their memory requirements
    investigate_data_types();
    
    // Part 2: Examine stack allocation for local variables
    investigate_stack();
    nested_function_call();
    
    // Part 3: Examine data segment (global and static variables)
    investigate_data_segment();
    
    // Part 4: Investigate heap allocation
    investigate_heap();
    
    printf("\n=============================================================\n");
    printf("Memory investigation complete! Now analyze the addresses:\n");
    printf("- Which addresses are highest? Lowest?\n");
    printf("- Do stack addresses increase or decrease in nested calls?\n");
    printf("- Are heap addresses near stack or data segment addresses?\n");
    printf("=============================================================\n");
    
    return 0;
}