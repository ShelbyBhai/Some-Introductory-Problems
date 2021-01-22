#include <stdio.h>
void test_function(int ara[])
{
       ara[0] = 100;
       return;
}
int main()
{
       int ara[] = {1, 2, 3, 4, 5};
       printf("%d\n", ara[0]);
       test_function(ara);
       printf("%d\n", ara[0]);
       return 0;
}

/*double robin(double x)
{
       double pi = 3.1416;
       double y;
       y = pi * x * x;
       return y;
}

int main()
{
       double r, z;
       scanf("%lf", &r);
       z = robin(r);
       printf("%0.2lf\n", z);
       return 0;
}*/
