#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,min,max,stp;
        scanf("%d%d",&x,&y);
        if(x == y)
        {
            printf("%d\n",2*x);
            continue;
        }
        if(x<y)
        {
            min = x;
            max = y;
        }
        else
        {
            min = y;
            max = x;
        }
        stp = (min * 2) +((max-min)*2 - 1);
        printf("%d\n",stp);
    }

    return 0;
}
