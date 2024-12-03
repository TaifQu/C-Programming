/* Experiment No:- 4

 Title :-WAP to find all the prime numbers between two numbers.

 Name :-Shaikh Md Fardin Salim 
 Class :-F.E.(AI & DS)
 Division:-A
 Roll No :-05
 UIN :-241A005 */

 #include <stdio.h>
 
 int isprime(int x)
 {
   for (int i = 2; i < x; i++)
   {
     if (x % i == 0)
     {
      return 0;
     }
   }
   return 1;
 }
 
 int main()
 {
 
 int a, b;
 printf("Enter the Starting Number :");
 scanf("%d",&a);
 printf("Enter the Ending Number :");
 scanf("%d",&b);
 
 for (int i = a; i <= b; i++)
 {
   if (isprime(i) == 1)
   {
     printf("%d ", i);
   }
 }
  return 0;
 }
 
 /*Ouput
 Enter the Starting and Ending Number 2 10
 2 3 5 7 */