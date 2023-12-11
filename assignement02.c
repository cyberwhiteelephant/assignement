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
