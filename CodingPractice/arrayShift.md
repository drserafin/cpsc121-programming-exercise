## Inserting a element in an array

When you want to insert an element into a specific position in an array, you typically need to shift the elements that come after the insertion point to the right to make space for the new element. 

1. Determine the Insertion Point: Identify the index where you want to insert the new element.
2. Shift the elements to the right: Starting from the last element of the array, shift each element one position to the right until you reach the insertion point. This creates an empty spot at the desired index.
3. Insert the New element: Place the new element into the now-empty position in the array.

```cpp
#include <iostream>

void insertElement(int arr[], int n, int index, int element) {
    if (index < 0 || index > n) {
        std::cout << "Invalid index position, place the index between the last and first elements" << std::endl;
        return;  // Exit the function if the index is invalid
    }

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }

    arr[index] = element;  // Insert the new element
    n++;  // Increment the size of the array

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;  // Print the array
    }
}

int main() {
    int array[6] = {1, 2, 3, 4, 5}; // Initial array with capacity for 6 elements
    int x = 99;  // Element to insert
    int n = 5;  // Current number of elements in the array
    int i = 2;  // Position where the new element is to be inserted

    insertElement(array, n, i, x);  // Call the function correctly

    return 0;
}


```