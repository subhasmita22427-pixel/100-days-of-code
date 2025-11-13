#include <stdio.h>
int main() 
{
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    fp = fopen("file.txt", "w");
    if (fp == NULL) 
    { printf("Error opening file\n");
        return 1;
    }

    printf("Enter no. of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nData written to file successfully\n");

    fp = fopen("file.txt", "r");
    if (fp == NULL) 
    { printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nStudent Records\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) 
    { printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);}
    fclose(fp);
    return 0;
}
