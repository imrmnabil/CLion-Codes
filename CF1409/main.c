#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,move;
        scanf("%d%d", &a, &b);
        move = (abs(a - b) + 9) / 10;
        printf("%d\n", move);
    }
    return 0;
}
