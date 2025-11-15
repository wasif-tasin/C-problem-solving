#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int m;
        scanf("%lld", &m);
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int sum = a * b * c;
        if (m % sum == 0)
        {
            long long int result = m / sum;
            printf("%lld", result);
        }
        else{
        printf("-1");
        }
        printf("\n");
    }
    return 0;
}