#include <stdio.h>

void print(char arr[])
{
    static int i = 0;
    if( arr[i] == '\0')
    {
        return;
    }
    printf("%c",arr[i]);
    i++;
    print(arr);

}

int main() {
    char arr[1000];
    printf("Enter the array:");
    scanf("%s",arr);
    printf("Output:");
    print(arr);
    printf("\n");
    return 0;
}
