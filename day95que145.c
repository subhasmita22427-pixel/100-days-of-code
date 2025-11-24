#include <stdio.h>

enum Size { TOTAL = 3 };
struct Student 
{ char name[40];
    int roll;
    float marks;
};
struct Student findTop(struct Student arr[]) 
{
    int i, top = 0;
    for (i = 1; i < TOTAL; i++) 
    { if (arr[i].marks > arr[top].marks)
            top = i;
    }
    return arr[top];
}

int main() 
{ struct Student list[TOTAL];
    struct Student topper;
    printf("Enter details of %d students (Name Roll Marks):\n", TOTAL);
    for (int i = 0; i < TOTAL; i++) 
    { scanf("%39s %d %f", list[i].name, &list[i].roll, &list[i].marks);}
    topper = findTop(list);
    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll, topper.marks);
    return 0;
}
