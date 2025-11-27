#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Field { NAME, ROLL, MARKS };

struct Student 
{ char name[30];
    int roll;
    int marks;
};

int main()
{ struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) 
    { printf("Memory allocation failed\n");
        return 0;
    }
    strcpy(s->name, "Tina");
    s->roll  = 105;
    s->marks = 88;
    printf("Name: %s , Roll: %d , Marks: %d\n",
           (enum Field)NAME == NAME ? s->name : "",
           (enum Field)ROLL == ROLL ? s->roll : 0,
           (enum Field)MARKS == MARKS ? s->marks : 0);
    free(s);
    return 0;
}
