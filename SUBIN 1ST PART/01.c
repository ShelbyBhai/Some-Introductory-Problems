#include <stdio.h>

int main()
{
       /*char ch;

       scanf("%c", &ch);

       if(ch >= 'a' && ch <= 'z') {
              printf("%c is lower case\n", ch);
       }

       else if(ch >= 'A' && ch <= 'Z') {
              printf("%c is upper case\n", ch);
       }

       return 0;*/
       int i=9,s=0;
       for(i=9;i<=11;i++)
       {      s=s+i;
          printf("%d\n",s);
       }
       s=0;
       for(i=9;i<=11;++i)
       {      s=s+i;
              printf("%d\n",s);
       }

}

