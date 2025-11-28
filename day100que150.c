#include <stdio.h>

enum Field { NAME, ROLL, MARKS };
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() 
{
    struct Student st;
    struct Student *p = &st;
    scanf("%s %d %d", p->name, &p->roll, &p->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", p->name, p->roll, p->marks);
    return 0;
}
