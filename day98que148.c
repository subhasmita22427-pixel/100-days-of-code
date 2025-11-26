#include <stdio.h>
#include <string.h>
enum check { SAME, NOT_SAME };
struct Student 
{   char name[50];
    int id;
    int marks;
};
int main() 
{   struct Student a, b;
    enum check result = NOT_SAME;
    printf("Enter details of Student1 (Name, ID, Marks): ");
    scanf("%s %d %d", a.name, &a.id, &a.marks);
    printf("Enter details of Student2 (Name, ID, Marks): ");
    scanf("%s %d %d", b.name, &b.id, &b.marks);
    if (strcmp(a.name, b.name) == 0 &&
        a.id == b.id &&
        a.marks == b.marks) 
    { result = SAME;}

    if (result == SAME)
        printf("Same\n");
    else
        printf("Not Same\n");
    return 0;
}
