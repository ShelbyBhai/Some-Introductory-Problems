#include<stdio.h>

int main()
{
    int n,i,j,m;
    printf("How many lines you want to print: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i); j++)
        {
            printf(" ");
        }
        for(j=i; j>=1;j-- )
        {
            m=i;
            printf("%2d",m);
        }
        printf("\n");
    }
}
