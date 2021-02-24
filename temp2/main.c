#include <stdio.h>

void merge_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
void merge(int arr[], int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int left_arr[len1], right_arr[len2];

    for (int i = 0; i < len1; i++)
    {
        left_arr[i] = arr[start + i];
    }
    for (int j = 0; j < len2; j++)
    {
        right_arr[j] = arr[mid + 1 + j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = start;

    while (i < len1 && j < len2)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while (i < len1)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}
int main()
{
    int arr[12], i;
    printf("Enter 10 integer numbers :\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr, 0, 9);
    printf("Sorted numbers are :");
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
}