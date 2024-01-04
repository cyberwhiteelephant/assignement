#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) 
{
    
    *max = *min = arr[0];
     for (int i = 1; i < size; i++) 
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

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max, min;

    findMaxMin(arr, size, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}





OutPut:-
PS D:\College Program\Assignement> gcc assignement02.c
PS D:\College Program\Assignement> .\a.exe
Enter the size of the array: 5
Enter the elements of the array:
Element 1: 12
Element 2: 23
Element 3: 32
Element 4: 43
Element 5: 45
Maximum element: 45
Minimum element: 12

