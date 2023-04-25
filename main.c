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
