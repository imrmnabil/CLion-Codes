#include <stdio.h>

int arr[5] = {1, 2, 3, 4, 5};

void print(int i)
{
    if(i == 5)
    {
        return;
    }
    printf("%d\n",arr[i]);
    print(i+1);
    printf("%d\n",arr[i]);
}

int main ()
{
    int i = 0;
    print(i);
    return 0;
}