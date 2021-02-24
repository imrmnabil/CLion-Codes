#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int count1 = 0,check1 = 0,count2 = 0,check2 = 0,len,i,ans;
        char arr[200003];
        scanf("%s",arr);
        len = strlen(arr);
        for(i = 0; i < len; i++)
        {
            if(arr[i] == '(')
            {
                check1++;
            }
            if(arr[i] == ')' && check1)
            {
                count1++;
                check1--;
            }
            if(arr[i] == '[')
            {
                check2++;
            }
            if(arr[i] == ']' && check2)
            {
                count2++;
                check2--;
            }
        }
        ans = count1 + count2;
        printf("%d\n",ans);

    }
    return 0;
}
