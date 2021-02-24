#include <stdio.h>
#include <string.h>

int main() {
    char arr[10005];
    int lnt,i,count = 0;
    printf("Input the string:");
    gets(arr);
    lnt = strlen(arr);
    for(i = 0; i <= lnt - 1 - i; i++)
    {
        if(arr[i] != arr[lnt - 1 - i])
        {
            count++;
            break;
        }
    }
    if(!count)
    {
        printf("%s is a palindrome\n",arr);
    }
    else
    {
        printf("%s is not a palindrome\n",arr);
    }
    return 0;
}
