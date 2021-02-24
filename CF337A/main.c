#include <stdio.h>

int main() {
    int n,m, f[1004], temp, min;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m ; i++)
    {
        scanf("%d",&f[i]);
    }

    for (int i = 1; i < m ; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(f[j] > f[j+1])
            {
                temp = f[j];
                f[j] = f[j+1];
                f[j+1] = temp;
            }
        }
    }

    min = f[n] - f[1];

    for(int i = 1; i <= (m - n + 1); i++)
    {
        if(min > (f[n - 1 + i] - f[i]))
        {
            min = (f[n - 1 + i] - f[i]);
        }
    }

    printf("%d\n",min);

    return 0;
}
