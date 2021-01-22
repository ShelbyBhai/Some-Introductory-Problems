#include <stdio.h>

int main()

{
    int i, n, m;

    for(n = 1; n <=5; n++)
    {

        for(i = 1,m=0; i <= 10; i++)
        {

            m = m + n;

            printf("%d x %d = %d\n", n, i, m);
        }
    }

    return 0;

}
