#include<stdio.h> 
int main(){
    
    int n;
    scanf("%d", &n);
    int r=(n+11)/2;
    int space=r-1;
     int star=1;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
 }
 int space2=5;
 int star2=n;
  for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=space2; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star2;j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
 
    }
    return 0;
}