#include <stdio.h>

int num;

int find(int arr[])
{
    int max = arr[1], i;
    for(i = 2; i <= num; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[10004], i;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    for(i = 1; i <= num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The largest element is:%d\n",find(arr));
    return 0;
}
