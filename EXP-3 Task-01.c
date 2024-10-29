// Program to create a simple calculator
#include <stdio.h> int main()
{

char operation;
double n1, n2;

printf("Enter an operator (+, -, *, /): ");
scanf("%c", &operation);

printf("Enter two operands: ");
scanf("%lf %lf",&n1, &n2);
