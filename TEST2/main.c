#include <stdio.h>
#include <string.h>

int main() {
    int n,i;
    char * p;
    char el[1003];
    p = el;
    printf("Input the string:\n");
    scanf("%s",p);
    printf("Output:\n");
    for (i = strlen(el)-1; i >= 0; i--)
    {
        printf("%c", *(p+i));
    }
    return 0;
}
