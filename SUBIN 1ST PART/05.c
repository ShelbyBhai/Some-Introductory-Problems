#include<stdio.h>

int main()

{
       int n = 1;

       while(n <= 20){

              printf("%d\n", n);

              n++;

              if(n > 10){
                     break;
              }

       }

       return 0;
}
