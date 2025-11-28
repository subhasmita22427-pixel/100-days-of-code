#include <stdio.h>
#include <stdlib.h>

enum Field { NAME, ROLL, MARKS };

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));
    if (!s) return 1;

    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
