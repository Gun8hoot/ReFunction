#include <stdio.h>
#include <stdbool.h>

static void swap(int *a, int *b)
{
    int tp;

    tp = *b;
    *b = *a;
    *a = tp;
}

static void bubblesort(int *arr, int size)
{
    int i;
    int j;
    bool sorted;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        sorted = false;
        while (j < size - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                sorted = true;
            }
            j++;
        }
        if (sorted == false)
            break;
        i++;
    }

}

// int main(void)
// {
//     int arr[] = {123, 34, 21, 1, 53, 6, 7413, 56231, 22, 1233, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int i = 0;
//     bubblesort(arr, size);
//     while (i < size)
//     {
//         printf("%d\n", arr[i]);
//         i++;
//     }
// }