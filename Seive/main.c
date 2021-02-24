#include <stdio.h>
#include <math.h>

int Prime[30000], nPrime;
int mark[1000002];
void seive(int n)
{
    int i, j, limit = (int)sqrt(n * 1) + 2;
    mark[1] = 1;
    for(i = 4; i <= n; i += 2)
    {
        mark[i] = 1;
    }
    Prime[nPrime] = 2;
    nPrime ++;
    for(i = 3; i <= n; i += 2)
    {
        if(mark[i] == 0)
        {
            Prime[nPrime] = i;
            nPrime++;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j += i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    seive(n);
    if(mark[n] == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}
