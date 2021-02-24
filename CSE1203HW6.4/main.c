#include <stdio.h>
#include <stdlib.h>
int main() {
    char std_name;
    char std_id[34];
    char std_dis[34];
    FILE *ptr;

    ptr = fopen("Student_info.txt", "a+");

    if(ptr == NULL)
    {
        printf("Error occured!");
        exit(1);
    }
    std_name = fgetc(ptr);
    printf("Student name:\n");
    while (std_name != EOF)
    {
        printf ("%c", std_name);
        std_name = fgetc(ptr);
    }
    printf("\n");
    fputc('\n',ptr);
    printf("Enter student ID: ");
    scanf("%s",std_id);
    fputs(std_id,ptr);
    fputc('\n',ptr);
    printf("Enter the discipline name: ");
    scanf("%s",std_dis);
    fputs(std_dis,ptr);
    fclose(ptr);
    printf("Successful!");
    return 0;
}
