#include <stdio.h.>

int string_length(char str[])
{
       int i = 0;
       while(str[i] != '\0'){
              i++;
       }
       return i;
}
int main()
{
       char country[100];
       int length;
       while(NULL != gets(country)){
       length = string_length(country);
       printf("length: %d\n", length);
       }
       return 0;
}
/*int main()
{
       char ara[100];
       while(NULL != gets(ara)){
              printf("%s\n", ara);}
       return 0;
}*/
