#include <stdio.h>
int main ()
{
int l,b,area,perimeter;
printf(" Enter the lenght and breadth of rectangle");
scanf("%d%d",&l,&b);
area = l*b;
perimeter = 2*(l+b);
printf("the area of rectangle is %d\n",area);
printf("the perimeter of rectangle is %d\n",perimeter);
return 0;
}


