#include <stdio.h>

int main(void)
{

        /* local variable definition */
   int a = 0x00;

   /* while loop execution */
   while( a < 0x11 )
   {
      putchar('%x' , a);
      a++;
   }
   putchar('\n');

   return (0);
}
