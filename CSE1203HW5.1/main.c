#include <stdio.h>

int main() {
    int n = 10, arr[1003], i,j,temp;
    printf("Enter the array of 10 number:");

    for (i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        for(j = 1; j < n; j++)
        {
            if( arr[j]  > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
}
