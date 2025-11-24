#include <stdio.h>
struct Student 
{
    char fullName[40];
    int id;
    float score;
};

int main()
{ struct Student st;
  printf("Enter student's name : ");
  scanf("%39s", st.fullName);
  printf("Enter roll no.: ");
  scanf("%d", &st.id);
    printf("Enter marks obtained  : ");
    scanf("%f", &st.score);
    printf("\nDetails Entered:\n");
    printf("Name  : %s\n", st.fullName);
    printf("Roll  : %d\n", st.id);
    printf("Marks : %.1f\n", st.score);
    return 0;
}
