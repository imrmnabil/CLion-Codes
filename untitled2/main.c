#include <stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,l,cnt1=0,cnt2=0;
    char str[200005];
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%s",str);
        l = strlen(str);
        for(j = 0; j < l; j++)
        {
            if(str[j] == '(')
            {
                for(k = j; k < l; k++)
                {
                    if(str[k] == ')')
                    {
                        cnt1++;
                        str[k] == '0';
                        break;
                    }
                }
            }
            else if(str[j] == '[')
            {
                for(k = j; k < l; k++)
                {
                    if(str[k] == ']')
                    {
                        cnt2++;
                        str[k] == '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", cnt1 + cnt2);
        cnt1 = 0;
        cnt2 = 0;
    }
    return 0;
}
