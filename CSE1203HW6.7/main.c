#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {
    FILE *ptr1, *ptr2;
    char fname1[102], fname2[102], c;
    printf("Enter the filename or directory:");
    scanf("%s", fname1);
    ptr1 = fopen(fname1, "r");
    if (ptr1 == NULL) {
        printf("Error!\n");
        exit(1);
    }
    strcpy(fname2, "temp.txt");
    ptr2 = fopen(fname2, "w");
    while (1) {
        c = fgetc(ptr1);
        if (c == EOF) {
            break;
        }
        if (c >= 65 && c <= 90) {
            c = c + 32;
        }
        fputc(c, ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
    remove(fname1);
    rename(fname2, fname1);
    printf("Successful.\n");

    return 0;
}
