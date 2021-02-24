#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr;
    char fname[102];
    int num1, num2, sum = 0;
    printf("Enter a filename that contains two integer:");
    scanf("%s",fname);
    ptr = fopen(fname, "a");
    if (ptr == NULL)
    {
        printf("Error!.\n", fname);
        exit(1);
    }
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    sum = num1 + num2;
    fprintf(ptr, " %d", sum);
    fclose(ptr);
    printf("Successful!\n");
    return 0;
}
