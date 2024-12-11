#include<stdio.h>

int factorialIterative(int num){

int prod = 1;
  for(int i =1; i <= num; i++) {

    prod *= i;
}
   return prod;

}


int main(){
     int num;

 printf("\t\t\t iterative factorial function *** \n\n");
printf("enter number");
scanf("%d",&num);

printf("factorial of %d is %d", num, factorialIterative(num));
return 0;
}

