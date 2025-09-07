#include <stdio.h>
int main ()
{
int r,area,circumference;
printf("Enter the radius of the circle: ");
scanf("%d",&r);
area=3.14*r*r;
circumference=2*3.14*r;
printf("Area of the circle is: %d\n",area);
printf("Circumference of the circle is: %d\n",circumference);
return 0;
}

