#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    char fname[102], c;
    int wcnt = 1,chcnt = 0;
    printf("Enter the filename to count :");
    scanf("%s",fname);
    ptr = fopen(fname, "r");
    if(ptr == NULL)
    {
        printf("File opening failed.");
        exit(1);
    }
    c = fgetc(ptr);
    while(c != EOF)
    {
        if(c==' '||c=='\n')
        {
            wcnt++;
        }
        chcnt++;
        c = fgetc(ptr);
    }
    printf("Words = %d\n", wcnt);
    printf("Character = %d\n", chcnt);
    fclose(ptr);
    return 0;
}
