#include <stdio.h>

int main ()
{
    FILE *ptr;
    int i,n;
    char str[102], fname[102]="test.txt", c;
    printf("Test Data:\nInput the number of lines to be written :");
    scanf("%d", &n);
    printf("\n:: The lines are ::\n");
    ptr = fopen(fname,"w");
    for(i=0; i<=n;i++)
    {
        fgets(str, sizeof (str), stdin);
        fputs(str, ptr);
    }
    fclose (ptr);
    ptr = fopen (fname, "r");
    printf("\nThe content of the file %s is :\n",fname);
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(ptr);
    }
    fclose (ptr);
    return 0;
}