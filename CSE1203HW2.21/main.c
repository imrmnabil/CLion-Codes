#include <stdio.h>

int nA, mA, nB, mB, a[1002][1002], b[1002][1002], sum, pos = 1;

int AxB(int i, int j)
{
    if(pos > mA)
    {
        return sum;
    }
    sum = sum + a[i][pos] * b[pos][j];
    pos++;
    AxB(i,j);
    return sum;
}

int main() {
    int i, j;
    printf("Enter the dimension of MAT(A) :");
    scanf("%d%d",&nA,&mA);
    printf("Enter MAT(A) :\n");
    for(i = 1; i <= nA; i++)
    {
        for(j = 1; j <= mA; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the dimension of MAT(B) :");
    scanf("%d%d",&nB,&mB);
    printf("Enter MAT(B):\n");
    for(i = 1; i <= nB; i++)
    {
        for(j = 1; j <= mB; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("MAT(A) * MAT(B):\n");
    for(i = 1;i <= nB; i++)
    {
        for(j = 1; j <= mB; j++)
        {
            printf("%d  ",AxB(i, j));
            sum = 0;
            pos = 1;
        }
        printf("\n");
    }

    return 0;
}
