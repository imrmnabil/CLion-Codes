#include <stdio.h>
#include <stdlib.h>
int main() {
    char c;
    FILE *ptr1 ,*ptr2 ,*ptr3;

    ptr1 = fopen("1.txt", "r");
    ptr2 = fopen("2.txt", "r");
    ptr3 = fopen("merge.txt", "a");

    if(ptr1 == NULL || ptr2 == NULL)
    {
        printf("Error occurred!");
        exit(1);
    }
    c = fgetc(ptr1);
    while(c != EOF)
    {
        fputc(c, ptr3);
        c = fgetc(ptr1);
    }
    c = fgetc(ptr2
            );
    while(c != EOF)
    {
        fputc(c, ptr3);
        c = fgetc(ptr2);
    }
    printf("Successful!");
    return 0;
}
