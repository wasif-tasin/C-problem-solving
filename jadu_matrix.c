#include <stdio.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 100;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i+j==r-1)
                {
                    if (arr[i][j]==0 || arr[i][j]>1)
                    {
                        printf("N0");
                        return 0;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        flag = 150;
                        printf("NO");
                    }
                }
            }
        }
        if (flag == 100)
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}