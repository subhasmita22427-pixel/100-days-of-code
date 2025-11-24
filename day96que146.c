#include <stdio.h>

enum DateField { DAY, MONTH, YEAR };  
struct Date 
{ int d, m, y;};
struct Employee 
{  char name[40];
    int id;
    struct Date join;  
};

int main() 
{  struct Employee emp;
    enum DateField df;  
    printf("Enter Employee Name: ");
    scanf("%39s", emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    df = DAY;
    printf("Enter Joining Day: ");
    scanf("%d", &emp.join.d);
    df = MONTH;
    printf("Enter Joining Month: ");
    scanf("%d", &emp.join.m);
    df = YEAR;
    printf("Enter Joining Year: ");
    scanf("%d", &emp.join.y);
    printf("\nEmployee Details:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id, emp.join.d, emp.join.m, emp.join.y);
    return 0;
}
