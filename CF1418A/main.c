#include <stdio.h>

int main () {
    long long int t , x, y, k, ans;
    scanf ("%lld",&t);
    while (t--)
    {
        scanf ("%lld%lld%lld", &x, &y, &k);

        ans = ((((y * k) + k-1+x-2))/(x-1)) + k;
        printf("%lld\n",ans);
    }

    return 0;
}
