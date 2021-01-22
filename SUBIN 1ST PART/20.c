#include <stdio.h>
/*int test_function(int x)

{
       int y = x;
       x = 3 * y;
       return (x * y);
}

int main()

{
       int x = 10, y = 20, z = 30;
       z = test_function(x);
       printf("%d %d %d\n", x, y, z);

       return 0;
}*/

double pi = 3.14;
void my_fnc(){
       pi = 3.1416;
       return;
       }
int main(){
       printf("%lf\n", pi);
       my_fnc();
       printf("%lf\n", pi);

       return 0;
       }
