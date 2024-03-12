// Define a structure to store employee information

#include <stdio.h>
struct employee 
{
    int Id;
    char name[50];
    char designation[50];
    float basicsalary;
    float hrapercent;
    float dapercent;
};

// Function to calculate gross salary
float GrossSalary(struct employee emp) 
{
    float hra = emp.hrapercent * emp.basicsalary / 100;
    float da = emp.dapercent * emp.basicsalary / 100;
    return emp.basicsalary + hra + da;
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n]; // Array of structures

    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Emp-id: ");
        scanf("%d", &emp[i].Id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicsalary);

        printf("HRA Percentage: ");
        scanf("%f", &emp[i].hrapercent);

        printf("DA Percentage: ");
        scanf("%f", &emp[i].dapercent);
    }

    printf("\nEmployee Information with Gross Salary:\n");
    for (int i = 0; i < n; i++) {
        float grossSalary = GrossSalary(emp[i]);
        printf("Employee %d\n", i + 1);
        printf("Emp-id: %d\n", emp[i].Id);
        printf("Name: %s\n", emp[i].name);
        printf("Designation: %s\n", emp[i].designation);
        printf("Gross Salary: %.2f\n", grossSalary);
        printf("\n");
    }

    return 0;
}
