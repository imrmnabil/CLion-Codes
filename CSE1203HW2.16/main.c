#include <stdio.h>
#include <string.h>
int l;
char arr[1000];

void revprint()
{

    if( l < 0)
    {
        return;
    }
    printf("%c",arr[l]);
    l--;
    revprint();
}

int main() {
    printf("Input :");
    gets(arr);
    l = (int)strlen(arr) - 1;
    printf("Output :");
    revprint();
    printf("\n");
    return 0;
}
