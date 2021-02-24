#include<stdio.h>

int main()
{
    FILE *ptr;
    int num, i, age, basic;
    char name[102];

    ptr = fopen("Employee_Record_Sheet.txt", "w");

    printf("Enter total number of employees :");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("Enter name :");
        scanf("%s", name);
        printf("Enter age :");
        scanf("%d", &age);
        printf("Enter basic income :");
        scanf("%d", &basic);
        fprintf(ptr,"%s %d %d\n", name, age, basic);
    }

    fclose(ptr);

    ptr = fopen("Employee_info.txt", "r");

    printf("Employees data successfully recorded.\n");
    return 0;
}
