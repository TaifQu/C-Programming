//program for the addition of two numbers in C using a
function
#include<stdio.h>

//function to find the addition of two numbers in C
int sum(int a, int b){
return a+b;
}

int main(){
//declare num1 and num2 to hold the given numbers
int num1, num2;

//Taking the input
scanf("%d %d", &num1, &num2);
//Calculating the sum and storing in ans
int ans = sum(num1,num2);

//Printing sum
printf("The sum of the given numbers is: %d", ans);
return 0;
}
