#include <stdio.h>

enum Limit { TOTAL = 5 };   
struct Student 
{   char name[40];
    int roll;
    float marks;
};
int main() 
{   struct Student record[TOTAL];
    int i;
    printf("Enter details for %d students:\n", TOTAL);
    for (i = 0; i < TOTAL; i++) 
    {   printf("\nStudent %d:\n", i + 1);
        printf("  Name  : ");
        scanf("%39s", record[i].name);
        printf("  Roll  : ");
        scanf("%d", &record[i].roll);
        printf("  Marks : ");
        scanf("%f", &record[i].marks);
    }
    printf("  %-12s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (i = 0; i < TOTAL; i++) 
    {    printf("  %-12s %-10d %-10.2f\n",
               record[i].name,
               record[i].roll,
               record[i].marks);
    }
    return 0;
}
