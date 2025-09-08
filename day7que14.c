#include<stdio.h>
int main ()
{
char a;
printf("enter the character");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{printf("the character is vowel");}
else printf("the character is consonant");
return 0;
}
