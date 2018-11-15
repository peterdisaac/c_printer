#include<stdio.h>

int main()
{
   int i, times;
   scanf("%d", &times);
   i = 0;
   while (i <= times)
   {
     for (j = 0; j <= times; j++ )
     {
       printf("%j\n", j);
     }

     if (i != 5) {
       printf("%d\n", i);
     }
     i ++;
   }

   return 0;
}
