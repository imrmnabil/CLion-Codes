#include <stdio.h>
#include <string.h>

int cardbl[28], sfll[28];

int ctoint(char ch)
{
    int intg;

    intg = (int) ch - 65;

    return intg;

}

int main(void) {

    int leng, lenh, lensfld, chk = 0;
    char g[103], h[103], sfld[103];

    scanf("%s",g);
    scanf("%s",h);
    scanf("%s",sfld);

    leng = strlen(g);
    lenh = strlen(h);
    lensfld = strlen(sfld);


    for (int i = 0; i < leng; i++)
    {
        int pos;

        pos = ctoint(g[i]);
        cardbl[pos]++;
    }

    for (int i = 0; i < lenh; i++)
    {
        int pos;

        pos = ctoint(h[i]);
        cardbl[pos]++;
    }

    for (int i = 0; i < lensfld; i++)
    {
        int pos;

        pos = ctoint(sfld[i]);
        sfll[pos]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(cardbl[i] != sfll[i])
        {
            chk ++;
        }
    }

    if(chk) {printf("NO\n");}
    else {printf("YES\n");}

    return 0;
}