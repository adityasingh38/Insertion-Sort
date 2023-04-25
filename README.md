
# Insertion Sort

Insertion Sort is a simple and efficient algorithm for sorting an array or list of elements. It works by iterating through the array and inserting each element into its correct position in a new, sorted list.

The algorithm for insertion sort works as given below:

1. Start with the second element of the array, and compare it with the first element. If the second element is smaller than the first, swap them. Otherwise, leave them as they are.
2. Move to the third element, and compare it with the second element. If the third element is smaller than the second, swap them. Otherwise, compare it with the first element. If the third element is smaller than the first, swap the third element with the first element. Otherwise, leave them as they are.
3. Repeat step 2 for all the remaining elements in the array, until the last element is reached.

In C, insertion sort can be implemented as follows:
```bash
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```
The function above takes an array arr of length n as input and sorts it in ascending order using the insertion sort algorithm. The sorted part and the unsorted part are initially divided in the input array, and the function iterates over the unsorted part one element at a time, inserting it into the correct position in the sorted part by shifting all the elements greater than it one position to the right. The implementation uses a variable key to store the current element that needs to be inserted into the sorted part and a variable j to keep track of the index where it needs to be inserted. The function starts with i = 1 because the first element of the array is already in the sorted part. A while loop is used to shift all the elements greater than key to the right until the correct position for key is found, and key is then inserted into the correct position by setting arr[j + 1] = key.

![insertion_sort-recursion](https://user-images.githubusercontent.com/88421625/234417360-c2b19253-6576-423c-9ac5-302680c11548.png)

## Key Points
Here are some important points about Insertion Sort:

•	Time Complexity: The time complexity of Insertion Sort is O(n^2) in the worst case, where n is the number of elements in the array. However, it performs better on small arrays or partially sorted arrays.

•	Space Complexity: The space complexity of Insertion Sort is O(1) because it sorts the elements in-place.

•	Algorithm: The algorithm for Insertion Sort involves iterating through the array and comparing each element with the previous elements in the sorted subarray. If the current element is smaller, it is shifted to the right until it finds its correct position.

•	Stability: Insertion Sort is a stable sorting algorithm, which means that it preserves the relative order of equal elements in the sorted array.

•	Adaptive: Insertion Sort is an adaptive sorting algorithm, which means that it performs better on partially sorted arrays. In such cases, the time complexity can be closer to O(n).

•	Implementation: Insertion Sort can be implemented using either iterative or recursive approaches. The iterative approach is more efficient and easier to understand.

•	Applications: Insertion Sort is used in various applications where the input size is small or partially sorted, such as sorting a deck of cards, sorting a small list of names, or sorting data in a database. It is also used as a subroutine in more complex sorting algorithms like Merge Sort and Quick Sort.



# Code

```bash
// implementing insertion sort

#include <stdio.h>

void InsertionSort(int a[], int n);

int main()
{
    int arr[5] = {17, 6, 1, 412, 76};
    int i;

    printf("Available array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    // sorting the given array
    InsertionSort(arr, 5);

    printf("Sorted array (Insertion Sort):\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// insertion sort
void InsertionSort(int a[], int n)
{
    int small_element;
    int i, j;

    for(i = 1; i < n; i++)
    {
        // storing the assumed small element in a variable called 'small'
        small_element = a[i];

        for(j = i - 1; j >= 0 && small_element < a[j]; j--)
        {
            a[j + 1] = a[j];
        }
        
        a[j + 1] = small_element;
    }
}
```
## Output

![Screenshot 2023-04-26 035248](https://user-images.githubusercontent.com/88421625/234417424-0789f4c6-0508-4780-ab27-ab5850f48b65.png)
