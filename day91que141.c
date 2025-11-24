#include <stdio.h>

enum Field { NAME, ROLL, MARKS };
struct Student 
{
    char fullName[40];
    int id;
    float score;
};

int main()
{
    struct Student st;
    enum Field f;
    f = NAME;
    printf("Enter student's name : ");
    scanf("%39s", st.fullName);
    f = ROLL;
    printf("Enter roll no.: ");
    scanf("%d", &st.id);
    f = MARKS;
    printf("Enter marks obtained : ");
    scanf("%f", &st.score);
    printf("\nDetails Entered:\n");
    printf("Name  : %s\n", st.fullName);
    printf("Roll  : %d\n", st.id);
    printf("Marks : %.1f\n", st.score);
    return 0;
}

