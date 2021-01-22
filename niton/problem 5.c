#include<stdio.h>
int main()
{
       double i,j,sum=0;
       for(i=1,j=1;i<=51;i++,j+=2)
       {
             sum=sum+(j/i);
       }
       printf("%lf",sum);
}
