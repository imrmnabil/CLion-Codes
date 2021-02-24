#include <stdio.h>

void merge_n_sort(int *, int, int, int);
void divide(int *, int, int);

int main()
{
    int el[12], i;
    printf("Enter the numbers to sort( 10 numbers ):");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&el[i]);
    }
    divide(el, 0, 9);
    printf("Result: ");
    for(i=0; i<10; i++)
    {
        printf("%d ",el[i]);
    }
    printf("\n");
    return 0;
}

void divide(int el[], int low, int high)
{
    printf("%d\n",high);
    if (low < high)
    {
        int mid = (low + high) / 2;
        divide(el, low, mid);
        divide(el, mid + 1, high);
        merge_n_sort(el, low, mid, high);
    }
}

void merge_n_sort(int el[], int low, int mid, int high)
{
    int lena, lenb;

    lena = mid - low + 1;
    lenb = high - mid;

    int a[lena], b[lenb];

    for (int i = 0; i < lena; i++)
    {
        a[i] = el[low + i];
    }
    for (int j = 0; j < lenb; j++)
    {
        b[j] = el[mid + 1 + j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = low;

    while (i < lena && j < lenb)
    {
        if (a[i] <= b[j])
        {
            el[k] = a[i];
            i++;
        }
        else
        {
            el[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < lena)
    {
        el[k] = a[i];
        i++;
        k++;
    }

    while (j < lenb)
    {
        el[k] = b[j];
        j++;
        k++;
    }
}

