#include <stdio.h>
#include <string.h>

int main()
{
    char arr[30][102],fname[100],c,chgln[102];
    int i, lcnt= 1,lnum;
    FILE *ptr1, *ptr2;
    printf("Enter the file name or directory:");
    scanf("%s",fname);
    ptr1 = fopen(fname, "r");
    while(1)
    {
        c = fgetc(ptr1);
        if(c == EOF)
        {
            break;
        }
        else if(c == '\n')
        {
            lcnt++;
        }
    }
    fclose(ptr1);
    ptr1 = fopen(fname, "r");
    ptr2 = fopen("temp.txt", "w");
    for(i = 1; i <= lcnt; i++)
    {
        fgets(arr[i],102,ptr1);
    }
    printf("Enter the line number to change:");
    scanf("%d",&lnum);
    printf("Enter the new line:");
    scanf("%s",chgln);
    for(i = 1 ; i <= lcnt; i++)
    {
        if(i == lnum)
        {

            strcpy(arr[i], chgln);
            fputs(arr[i],ptr2);
            fputc('\n',ptr2);
        }
        else
        {
            fputs(arr[i],ptr2);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    remove(fname);
    rename("temp.txt",fname);
    printf("Line successfully replaced.\n");
    return 0;
}
