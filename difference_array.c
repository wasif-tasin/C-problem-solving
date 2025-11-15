#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int k = 1; k <=t; k++)
    {
        int n;
        scanf("%d", &n);
        int arr[n],brr[n],c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            brr[i] = arr[i];
        }
        for (int i=0; i<n;i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if(brr[i]>brr[j])
                {
                    int temp=brr[i];
                    brr[i]=brr[j];
                    brr[j]=temp;
                }
            }
        }
       for(int i=0; i<n; i++)
       {
        c[i]=(arr[i]-brr[i]);
        c[i]= abs (c[i]);
        printf("%d ",  c[i]);
       }
       printf("\n");
       
    }
    return 0;
}