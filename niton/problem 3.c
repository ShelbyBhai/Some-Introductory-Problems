#include<stdio.h>
#include<math.h>

int main()
{

       int p,q,m,n;
       printf("how many lines: ");
       scanf("%d",&n);
       printf("\n");
       for(p=1;p<=n;p++)
       {
              for(q=1;q<=(n-p);q++)
              {
                     printf(" ");
              }
              m=p;
              for(q=1;q<=p;q++)
              {
                     printf("%d",m++);
              }
              m-=2;
              for(q=1;q<p;q++)
              {
                     printf("%d",m--);
              }
              printf("\n");

       }
}
