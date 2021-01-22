#include<stdio.h>
#include<math.h>
int main()
{
       int i,n;
       float x,y=1,sum=1;
       printf("enter the value of angle in degree: ");
       scanf("%f",&x);
       x=x*3.1416/180;
       for(i=1;i<=n;i++)
       {
              y=y*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
              sum=sum+y;
       }
       printf("cos(x)= %f",sum);
       getch();


}
