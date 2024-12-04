/*Aim: WAP to get students PCM marks from the user and find the average. Use conditional operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
*/


#include<stdio.h>
int main()
{ 
    int p,c,m,avg;
    printf("Enter Physics Marks:");
    scanf("%d",&p);
    printf("Enter chemistry Marks:");
    scanf("%d",&c);
    printf("Enter Maths Marks:");
    scanf("%d",&m);
    avg=(p+c+m)/3;
    printf("Average:%d\n",avg);
    avg>=50?printf("You are eligible for admission"):printf("you are not eligible for admission");
    return 0;
}
/*Expected Output-1:
Enter Physics Marks: 60
Enter Chemistry Marks: 70
Enter Maths Marks: 78
PCM Average = 69
You are Eligible for Admission

Expected Output-2:
Enter Physics Marks: 35
Enter Chemistry Marks: 55
Enter Maths Marks: 47
PCM Average = 45
You are NOT Eligible for Admission*/


