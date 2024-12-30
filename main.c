#include <stdio.h>
#include <stdlib.h>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Print a simple greeting
    printf("Hello, World!\n");

    /////////////////////////////////////////////////////

    // Demonstrate a simple addition using the add function
    int addition = add(10, 20);
    printf("Addition : %d\n", addition);

    /////////////////////////////////////////////////////

    // Demonstrate pointer usage
    int x = 5;
    int *p = &x; // Initialize pointer to hold the address of x

    // Print pointer's address and value at that address
    printf("Pointer and stored Value: %p, %d\n", p, *p);

    /////////////////////////////////////////////////////

    // Change the value of x using the pointer
    int y = 50;
    *p = y; // Assign new value to x through the pointer

    // Display updated value and pointer address
    printf("Change pointer value: %d\n", *p);
    printf("Access pointer address: %p\n", p);

    /////////////////////////////////////////////////////

    // Reassign pointer to a new variable
    p = &y;

    // Display new value and address stored in the pointer
    printf("Change pointer value: %d\n", *p);
    printf("Access pointer address: %p\n", p);

    /////////////////////////////////////////////////////

    // Demonstrate working with arrays
    int numbers[5] = {1, 2, 3, 4, 5};

    // Print array elements using a loop
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    /////////////////////////////////////////////////////

    // Display elements of another array
    int arr[4] = {10, 20, 30, 40};

    // Print each array element individually
    printf("First element: %d\n", arr[0]);
    printf("Second element: %d\n", arr[1]);
    printf("Third element: %d\n", arr[2]);
    printf("Fourth element: %d\n", arr[3]);

    return 0; // Exit early to avoid executing further code

    /////////////////////////////////////////////////////

    // Multidimensional array example
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Iterate through the matrix and print each element
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    /////////////////////////////////////////////////////

    // Dynamic memory allocation example
    int *array = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    array[0] = 10;                               // Assign value to the first element
    free(array);                                 // Free allocated memory to avoid memory leaks

    return 0;
}
