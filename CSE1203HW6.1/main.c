#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr1, *ptr2;
    char fname[1002];
    char ch;
    printf("Enter the original filename :");
    scanf("%s", fname);
    ptr1 = fopen(fname,"r");
    if (ptr1 == NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    printf("Enter the clone filename :");
    scanf("%s", fname);
    ptr2 = fopen(fname,"w");
    if (ptr2 == NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(ptr1);
        if(ch == EOF)
        {
            break;
        }

        fputc(ch, ptr2);

    }
    printf("Done\n.");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}