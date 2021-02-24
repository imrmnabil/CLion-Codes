#include <stdio.h>
#include <string.h>

void srt(char * arr, int l);
void angrm(char * arr1,char * arr2);

int main() {
    char arr1[1000], arr2[1000];
    int l1, l2;

    printf("Input 1st string:");
    scanf("%s",arr1);
    printf("Input 2nd string:");
    scanf("%s",arr2);
    l1 = strlen(arr1);
    l2 = strlen(arr2);
    srt(arr1, l1);
    srt(arr2, l2);
    angrm(arr1, arr2);

    return 0;
}

void srt(char * arr, int l)
{
    int i, j;
    char swap;
    for(i = 0; i < l - 1; i++)
    {
        for(j = 0; j < l - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}

void angrm(char * arr1,char * arr2)
{
    int match;

    match = strcmp(arr1, arr2);
    if(match)
    {
        printf("The strings are not anagram.\n");
    }
    else
    {
        printf("The strings are anagram.\n");
    }
}