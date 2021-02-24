#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    FILE *ptr1, *ptr2;
    char fname1[1002];
    char fname2[1002];
    char ch;
    printf("Enter the filename or directory:");
    scanf("%s", fname1);
    ptr1 = fopen(fname1,"r");
    if (ptr1 == NULL)
    {
        printf("Can't open file.\n");
        exit(0);
    }

    strcpy(fname2, "temp.txt");

    ptr2 = fopen(fname2,"w");
    while (1)
    {
        ch = fgetc(ptr1);
        if(ch == EOF)
        {
            break;
        }
        if(ch >=97 && ch <= 122)
        {
            ch = ch -32;
        }
        fputc(ch, ptr2);

    }

    fclose(ptr1);
    fclose(ptr2);
    remove(fname1);
    rename(fname2,fname1);
    printf("Done.\n");
    return 0;
}