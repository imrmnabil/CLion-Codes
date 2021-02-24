#include <stdio.h>

void prime(int num)
{
    int i, count = 0;
    if(num == 1) {count++;}
    for(i = 2; i*i <= num + 2 ;i++)
    {
        if(num % i == 0 && i != num)
        {
            count++;
            break;
        }
    }
    if(count)
    {
        printf("%d is not prime.\n",num);
    }
    else
    {
        printf("%d is prime.\n",num);
    }
}

int main()
{
    int num;
    printf("Input the number :");
    scanf("%d",&num);
    prime(num);
    return 0;
}
