// Write a C program to find the maximum and minimum element in an array.

#include <stdio.h>

void findMinMax(int arr[], int size, int *max, int *min) 
{
    *max = *min = arr[0];

    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > *max) 
        {
            *max = arr[i];
        } 
        else if (arr[i] < *min) 
        {
            *min = arr[i];
        }
    }
}

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    int max, min;

    findMinMax(arr, size, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}




Output:-
PS D:\College Program\Assignement> gcc assignement04.c
PS D:\College Program\Assignement> .\a.exe
Enter the size of the array: 5
Enter 5 elements of the array:
20
09
90
87
87
Maximum element: 90
Minimum element: 9

