#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    char fname[102], c;
    int lcnt = 1, blcnt = 0, comcnt = 0,chk = 0;
    printf("Enter the filename to count :");
    scanf("%s",fname);
    ptr = fopen(fname, "r");
    if(ptr == NULL)
    {
        printf("File opening failed.");
        exit(1);
    }
    while(1)
    {
        c = fgetc(ptr);
        if( c == EOF)
        {
            break;
        }
        if(c == '/')
        {
            comcnt++;
            chk = 0;
        }
        else if(c == '\n' && chk == 0) {
            lcnt++;
            chk = 1;
        }
        else if(c == '\n' && chk == 1)
        {
            lcnt++;
            blcnt++;
        }
        else
        {
            chk = 0;
        }

    }
    printf("Lines = %d\n", lcnt);
    printf("Blank lines = %d\n", blcnt);
    printf("Comments = %d\n", comcnt/2);
    fclose(ptr);
    return 0;
}