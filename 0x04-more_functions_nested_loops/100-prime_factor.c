#include <stdio.h>
#include <math.h>

/**
* main - Entry poinyt
* Return: 0
*/

int main()

{
int c;
long num = 612852475143;

for(c = (int) sqrt(num); c > 2; c++)

{
if(num % c == 0)

{
printf("%d\n", c);
break;
}
}
return (0);
}