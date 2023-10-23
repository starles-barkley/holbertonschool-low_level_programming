#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL; // Return NULL if size is 0
    }

    char *array = (char *)malloc(size * sizeof(char)); // Allocate memory for the array

    if (array == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c; // Initialize the array with the specified character
    }

    return array;
}
