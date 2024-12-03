#include<stdio.h>
void counter(){
     static int count = 0;
     count++;

     printf("Counter function called : %d\n",count);
     }

     int main (){
         int i;
         printf("\t\t\t *** storage class ***\n\n");
         for(i=1;i<=46;i++)
         counter();

         return 0;
     }
