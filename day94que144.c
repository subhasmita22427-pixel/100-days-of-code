#include <stdio.h>

enum Field { NAME, ROLL, MARKS }; 
struct Student {
    char name[40];
    int roll;
    float marks;
};
void display(struct Student s) 
{  enum Field f;
    f = NAME;
    printf("Name: %s | ", s.name);
    f = ROLL;
    printf("Roll: %d | ", s.roll);
    f = MARKS;
    printf("Marks: %.0f\n", s.marks);
}

int main() 
{   struct Student st;
    printf("Enter student details (Name Roll Marks):\n");
    scanf("%39s %d %f", st.name, &st.roll, &st.marks);
    printf("\nStudent Details:\n");
    display(st);
    return 0;
}
