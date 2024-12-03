#include <stdio.h>
int main ()
{

int n, i, a[100], large;

printf ("Enter the number of elements:");
scanf ("%d", &n);

for (i=0;i<=n-1;i++)
{
printf ("Enter a value:") ;
scanf ("%d", &a[1]) ;
}

large=a [0];
for (i=0;i<=n-1;i++){
if (large<a[i])
large = a[i] ;
    }
printf("The largest number is %d", large);

return 0;


}

