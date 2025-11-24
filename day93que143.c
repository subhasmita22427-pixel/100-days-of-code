#include <stdio.h>

enum Count { TOTAL = 3 };   
struct Student 
{
    char name[40];
    int roll;
    float marks;
};

int main() 
{
    struct Student s[TOTAL];
    int i, topIndex = 0;
    printf("Enter details of %d students (Name Roll Marks):\n", TOTAL);
    for (i = 0; i < TOTAL; i++) {
        printf("\nStudent %d:\n", i + 1);
        scanf("%39s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    for (i = 1; i < TOTAL; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }
    printf("\nStudent with Highest Marks:\n");
    printf("Name  : %s\n", s[topIndex].name);
    printf("Roll  : %d\n", s[topIndex].roll);
    printf("Marks : %.2f\n", s[topIndex].marks);
    return 0;
}
