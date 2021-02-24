#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char filename[102], ch;
    int count = 0;
    printf("Enter a filename or directory :");
    scanf("%s",filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    ch = fgetc(fp);
    while(ch != EOF)
    {
        ch = fgetc(fp);
        count++;
    }
    fclose(fp);
    printf("The numbers of character is %d\n", count);
    return 0;
}