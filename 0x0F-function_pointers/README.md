# 0x0F-function_pointers

This repository contains tasks and programs that focus on creating and working with function pointers in the C programming language.

## Files

- **0-print_name.c**: This file contains a function that prints a name using a provided function pointer.

   - **Prototype**: `void print_name(char *name, void (*f)(char *))`

- **1-array_iterator.c**: In this file, you'll find a function that executes a provided function on each element of an array. It takes the array, its size, and a function pointer as parameters.

   - **Prototype**: `void array_iterator(int *array, size_t size, void (*action)(int))`
   - `size`: The size of the array.
   - `action`: A pointer to the function to apply to each element.

- **2-int_index.c**: This file contains a function that searches for an integer in an array. It returns the index of the first element for which the provided comparison function does not return 0.

   - **Prototype**: `int int_index(int *array, int size, int (*cmp)(int))`
   - `size`: The number of elements in the array.
   - `cmp`: A pointer to the comparison function.
   - If no element matches, it returns -1.
   - If size <= 0, it returns -1.

- **3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h**: These files are part of a program that includes five basic operations:

   - `op_add`: Returns the sum of two integers.
   - `op_sub`: Returns the difference between two integers.
   - `op_mul`: Returns the product of two integers.
   - `op_div`: Returns the result of dividing one integer by another.
   - `op_mod`: Returns the remainder of the division of one integer by another.

   Additionally, the `3-get_op_func.c` file contains the function that selects the correct operation function based on user input. No other functions are declared within this program.

You can explore each file to see the implementation details and how function pointers are utilized for various tasks.


