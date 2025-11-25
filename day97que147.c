#include <stdio.h>
#include <stdlib.h>
enum Department 
{   HR = 1,
    SALES,
    IT,
    FINANCE
};

struct Employee 
{
    char name[30];
    int id;
    float salary;
    enum Department dept;
};

int main() 
{ struct Employee e1, e2;
    FILE *fp;
    printf("Enter Employee Name: ");
    scanf("%s", e1.name);
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter Salary: ");
    scanf("%f", &e1.salary);
    printf("Enter Department (1-HR, 2-SALES, 3-IT, 4-FINANCE): ");
    scanf("%d", (int*)&e1.dept);
    fp = fopen("employee.dat", "wb");
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee details entered and stored in file.\n");
    fp = fopen("employee.dat", "rb");
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee Details Read From File\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);
    printf("Department: ");
    switch (e2.dept) 
    {
        case HR: printf("HR\n"); break;
        case SALES: printf("SALES\n"); break;
        case IT: printf("IT\n"); break;
        case FINANCE: printf("FINANCE\n"); break;
        default: printf("Unknown\n");
    }
    return 0;
}
