#include <stdio.h>
/*int find_min(int ara[], int n)

{
       int min = ara[0];
       int i;
       for(i = 1; i < n; i++){
              if(ara[i] < min){
                     min = ara[i];
              }
       }
       return min;
}

int main()
{
       int n, i;
       scanf("%d", &n);
       int ara[n];
       for(i=0; i<n; i++){
              scanf("%d", &ara[i]);
       }
       int min = find_min(ara, n);
       printf("%d\n", min);
       return 0;
}*/
double find_average(double ara[], int n)

{
       int i;
       double x;
       for(i=0; i<n; i++){
             x = x + ara[i];
       }
       double m = (double)n;
       double a = x / m;
       return a;
}

int main()
{
       int n, i;
       scanf("%d", &n);
       double ara[n];
       for(i=0; i<n; i++){
              scanf("%lf", &ara[i]);
       }
       double average = find_average(ara, n);
       printf("%0.2lf\n", average);
       return 0;

}

